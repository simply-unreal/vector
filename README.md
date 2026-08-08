# vector

A single-header, easy to use, dynamic array in C

## Features

- **12 fully-typed vector types**: `i8`, `i16`, `i32`, `i64`, `u8`, `u16`, `u32`, `u64`, `f32`, `f64`, `usize`, `isize`
- **Single header implementation** — implementation compiled once via `VECTOR_IMPL` macro
- **15 operations per type** — init, free, push, pop, at, erase, back, first, data, size, capacity, empty, clear, resize, shrink_to_fit
- **Automatic growth** — capacity doubles on push when full
- **Allocation-failure tracking** — every vector carries an `err` flag
- Zero external dependencies beyond the C standard library and `short_types.h` which you can find at https://github.com/simply-unreal/short-types

## Dependency: `short_types.h`

This library does not define its own numeric types — it expects a `short_types.h` in the include path that provides the following aliases:

| Alias   | Expected underlying type |
|---------|---------------------------|
| `i8`    | `int8_t`                  |
| `i16`   | `int16_t`                 |
| `i32`   | `int32_t`                 |
| `i64`   | `int64_t`                 |
| `u8`    | `uint8_t`                 |
| `u16`   | `uint16_t`                |
| `u32`   | `uint32_t`                |
| `u64`   | `uint64_t`                |
| `f32`   | `float`                   |
| `f64`   | `double`                  |
| `usize` | `size_t`                  |
| `isize` | `ptrdiff_t` (or signed equivalent of `size_t`) |

## Installation

Drop `vector.h` and your `short_types.h` anywhere on your include path. In **exactly one** translation unit, define `VECTOR_IMPL` before including the header to pull in the implementation:

```c
// vector_impl.c
#define VECTOR_IMPL
#include "vector.h"
```

Every other file that needs the vector types just includes it normally:

```c
// main.c
#include "vector.h"
```

## Quick example

```c
#include <stdio.h>
#include "vector.h"

int main(void) {
    i32_vector nums = init_i32_vec();

    push_i32_vec(&nums, 10);
    push_i32_vec(&nums, 20);
    push_i32_vec(&nums, 30);

    if (nums.err) {
        fprintf(stderr, "allocation failed\n");
        return 1;
    }

    for (usize i = 0; i < size_i32_vec(&nums); i++) {
        printf("%d\n", at_i32_vec(&nums, i));
    }

    printf("back: %d\n", back_i32_vec(&nums));
    printf("first: %d\n", first_i32_vec(&nums));

    free_i32_vec(&nums);
    return 0;
}
```

## The vector struct

Every `vector` (e.g. `i32_vector`) has the same shape:

```c
typedef struct {
    usize size;      // number of elements currently stored
    usize capacity;  // number of elements allocated
    bool  err;        // set true if an allocation ever failed
    T    *data;       // raw backing array
} vector;
```

`data` is a plain pointer, so it's always safe to pass to APIs expecting a contiguous `T*` array (e.g. `data_i32_vec(&v)` for interop with C code, `memcpy`, etc.).

## API reference

Every function below exists once **per type**, with `TYPE` replaced by the type name (`i8`, `i16`, `i32`, `i64`, `u8`, `u16`, `u32`, `u64`, `f32`, `f64`, `usize`, `isize`) and `T` the corresponding C type from `short_types.h`. For example, `push_TYPE_vec` becomes `push_i32_vec`, `push_u64_vec`, `push_f32_vec`, and so on for all 12 types.

| Function | Signature | Description |
|---|---|---|
| `init_TYPE_vec`         | `TYPE_vector init_TYPE_vec(void)`                          | Allocates a new vector with capacity 4 and size 0. |
| `free_TYPE_vec`         | `void free_TYPE_vec(TYPE_vector *vec)`                     | Frees the backing storage and zeroes size/capacity. |
| `push_TYPE_vec`         | `void push_TYPE_vec(TYPE_vector *vec, T val)`               | Appends a value, doubling capacity if full. |
| `pop_TYPE_vec`          | `void pop_TYPE_vec(TYPE_vector *vec)`                       | Removes the last element (no-op if empty). |
| `at_TYPE_vec`           | `T at_TYPE_vec(TYPE_vector *vec, usize index)`               | Bounds-checked element access; returns `0` on out-of-range. |
| `erase_TYPE_vec`        | `void erase_TYPE_vec(TYPE_vector *vec, usize index)`         | Removes the element at `index`, shifting subsequent elements down O(n). |
| `back_TYPE_vec`         | `T back_TYPE_vec(TYPE_vector *vec)`                          | Returns the last element, or `0` if empty. |
| `first_TYPE_vec`        | `T first_TYPE_vec(TYPE_vector *vec)`                         | Returns the first element, or `0` if empty. |
| `data_TYPE_vec`         | `T* data_TYPE_vec(TYPE_vector *vec)`                         | Returns the raw backing pointer. |
| `size_TYPE_vec`         | `usize size_TYPE_vec(TYPE_vector *vec)`                      | Returns the current element count. |
| `capacity_TYPE_vec`     | `usize capacity_TYPE_vec(TYPE_vector *vec)`                  | Returns the current allocated capacity. |
| `empty_TYPE_vec`        | `bool empty_TYPE_vec(TYPE_vector *vec)`                      | Returns `true` if size is 0 (or `vec` is `NULL`). |
| `clear_TYPE_vec`        | `void clear_TYPE_vec(TYPE_vector *vec)`                      | Sets size to 0 without freeing or shrinking capacity. |
| `resize_TYPE_vec`       | `void resize_TYPE_vec(TYPE_vector *vec, usize new_size)`     | Grows/reallocates to `new_size`, zero-filling new slots. Does not shrink capacity when `new_size < size`. |
| `shrink_to_fit_TYPE_vec`| `void shrink_to_fit_TYPE_vec(TYPE_vector *vec)`               | Reallocates capacity down to match current size. |

All functions gracefully no-op (or return `0`/`NULL`/`true` as appropriate) when passed a `NULL` vector pointer.

## Error handling

There is no exceptions/`Result` mechanism — allocation failures are recorded on the struct itself:

```c
i32_vector v = init_i32_vec();
push_i32_vec(&v, 42);

if (v.err) {
    // a malloc/realloc call failed somewhere along the way
}
```

`err` is sticky: once set, nothing in this header clears it automatically. Check it after any operation that allocates (`init`, `push`, `resize`, `shrink_to_fit`).

## Growth & memory behavior

- New vectors start with **capacity 4**.
- `push_TYPE_vec` **doubles** capacity via `realloc` whenever `size >= capacity`.
- `erase_TYPE_vec` is O(n) — it shifts all subsequent elements left by one.
- `clear_TYPE_vec` resets `size` to 0 but keeps the allocated capacity (use `shrink_to_fit_TYPE_vec` afterward to reclaim memory).
- `resize_TYPE_vec` only grows the backing allocation; shrinking `size` does not release memory.
- `at_TYPE_vec`, `back_TYPE_vec`, and `first_TYPE_vec` return `0` on empty/out-of-bounds access rather than aborting — there's no panic/assert, so bugs from ignoring bounds can be silent. Check `empty_TYPE_vec` / `size_TYPE_vec` before relying on these when correctness matters.

## Known limitations

- **`max_vec_size()` is declared but not implemented.** It's listed at the top of the header (`usize max_vec_size();`) with no matching definition under `VECTOR_IMPL`. Calling it will fail at link time until it's implemented.
- No `generic` vector yet — you must call the type-suffixed function directly (`push_i32_vec`, not a generic `push_vec`).
- Not thread-safe; no internal locking.
- No iterator/foreach helpers — iterate manually with `size_TYPE_vec` + `at_TYPE_vec`, or use `data_TYPE_vec` for direct pointer access.

## Supported types

`i8` · `i16` · `i32` · `i64` · `u8` · `u16` · `u32` · `u64` · `f32` · `f64` · `usize` · `isize`
