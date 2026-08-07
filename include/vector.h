#ifndef VECTOR_H
#define VECTOR_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "short_types.h"

typedef struct { usize size; usize capacity; bool err; i8 *data; } i8_vector;
typedef struct { usize size; usize capacity; bool err; i16 *data; } i16_vector;
typedef struct { usize size; usize capacity; bool err; i32 *data; } i32_vector;
typedef struct { usize size; usize capacity; bool err; i64 *data; } i64_vector;

typedef struct { usize size; usize capacity; bool err; u8 *data; } u8_vector;
typedef struct { usize size; usize capacity; bool err; u16 *data; } u16_vector;
typedef struct { usize size; usize capacity; bool err; u32 *data; } u32_vector;
typedef struct { usize size; usize capacity; bool err; u64 *data; } u64_vector;

typedef struct { usize size; usize capacity; bool err; f32 *data; } f32_vector;
typedef struct { usize size; usize capacity; bool err; f64 *data; } f64_vector;

typedef struct { usize size; usize capacity; bool err; usize *data; } usize_vector;
typedef struct { usize size; usize capacity; bool err; isize *data; } isize_vector;

// generic
usize max_vec_size();

// i8 vector
i8_vector init_i8_vec();
void free_i8_vec(i8_vector *vec);
i8 at_i8_vec(i8_vector *vec, usize index);
void pop_i8_vec(i8_vector *vec);
void erase_i8_vec(i8_vector *vec, usize index);
usize back_i8_vec(i8_vector *vec);
usize first_i8_vec(i8_vector *vec);
i8* data_i8_vec(i8_vector *vec);
usize capacity_i8_vec(i8_vector *vec);
usize size_i8_vec(i8_vector *vec);
void clear_i8_vec(i8_vector *vec);
bool empty_i8_vec(i8_vector *vec);
void resize_i8_vec(i8_vector *vec);
void shrink_to_fit_i8_vec(i8_vector *vec);

// i16 vector
i16_vector init_i16_vec();
void free_i16_vec(i16_vector *vec);
i16 at_i16_vec(i16_vector *vec, usize index);
void pop_i16_vec(i16_vector *vec);
void erase_i16_vec(i16_vector *vec, usize index);
usize back_i16_vec(i16_vector *vec);
usize first_i16_vec(i16_vector *vec);
i16* data_i16_vec(i16_vector *vec);
usize capacity_i16_vec(i16_vector *vec);
usize size_i16_vec(i16_vector *vec);
void clear_i16_vec(i16_vector *vec);
bool empty_i16_vec(i16_vector *vec);
void resize_i16_vec(i16_vector *vec);
void shrink_to_fit_i16_vec(i16_vector *vec);

// i32 vector
i32_vector init_i32_vec();
void free_i32_vec(i32_vector *vec);
i32 at_i32_vec(i32_vector *vec, usize index);
void pop_i32_vec(i32_vector *vec);
void erase_i32_vec(i32_vector *vec, usize index);
usize back_i32_vec(i32_vector *vec);
usize first_i32_vec(i32_vector *vec);
i32* data_i32_vec(i32_vector *vec);
usize capacity_i32_vec(i32_vector *vec);
usize size_i32_vec(i32_vector *vec);
void clear_i32_vec(i32_vector *vec);
bool empty_i32_vec(i32_vector *vec);
void resize_i32_vec(i32_vector *vec);
void shrink_to_fit_i32_vec(i32_vector *vec);

// i64 vector
i64_vector init_i64_vec();
void free_i64_vec(i64_vector *vec);
i64 at_i64_vec(i64_vector *vec, usize index);
void pop_i64_vec(i64_vector *vec);
void erase_i64_vec(i64_vector *vec, usize index);
usize back_i64_vec(i64_vector *vec);
usize first_i64_vec(i64_vector *vec);
i64* data_i64_vec(i64_vector *vec);
usize capacity_i64_vec(i64_vector *vec);
usize size_i64_vec(i64_vector *vec);
void clear_i64_vec(i64_vector *vec);
bool empty_i64_vec(i64_vector *vec);
void resize_i64_vec(i64_vector *vec);
void shrink_to_fit_i64_vec(i64_vector *vec);

// u8 vector
u8_vector init_u8_vec();
void free_u8_vec(u8_vector *vec);
u8 at_u8_vec(u8_vector *vec, usize index);
void pop_u8_vec(u8_vector *vec);
void erase_u8_vec(u8_vector *vec, usize index);
usize back_u8_vec(u8_vector *vec);
usize first_u8_vec(u8_vector *vec);
u8* data_u8_vec(u8_vector *vec);
usize capacity_u8_vec(u8_vector *vec);
usize size_u8_vec(u8_vector *vec);
void clear_u8_vec(u8_vector *vec);
bool empty_u8_vec(u8_vector *vec);
void resize_u8_vec(u8_vector *vec);
void shrink_to_fit_u8_vec(u8_vector *vec);

// u16 vector
u16_vector init_u16_vec();
void free_u16_vec(u16_vector *vec);
u16 at_u16_vec(u16_vector *vec, usize index);
void pop_u16_vec(u16_vector *vec);
void erase_u16_vec(u16_vector *vec, usize index);
usize back_u16_vec(u16_vector *vec);
usize first_u16_vec(u16_vector *vec);
u16* data_u16_vec(u16_vector *vec);
usize capacity_u16_vec(u16_vector *vec);
usize size_u16_vec(u16_vector *vec);
void clear_u16_vec(u16_vector *vec);
bool empty_u16_vec(u16_vector *vec);
void resize_u16_vec(u16_vector *vec);
void shrink_to_fit_u16_vec(u16_vector *vec);

// u32 vector
u32_vector init_u32_vec();
void free_u32_vec(u32_vector *vec);
u32 at_u32_vec(u32_vector *vec, usize index);
void pop_u32_vec(u32_vector *vec);
void erase_u32_vec(u32_vector *vec, usize index);
usize back_u32_vec(u32_vector *vec);
usize first_u32_vec(u32_vector *vec);
u32* data_u32_vec(u32_vector *vec);
usize capacity_u32_vec(u32_vector *vec);
usize size_u32_vec(u32_vector *vec);
void clear_u32_vec(u32_vector *vec);
bool empty_u32_vec(u32_vector *vec);
void resize_u32_vec(u32_vector *vec);
void shrink_to_fit_u32_vec(u32_vector *vec);

// u64 vector
u64_vector init_u64_vec();
void free_u64_vec(u64_vector *vec);
u64 at_u64_vec(u64_vector *vec, usize index);
void pop_u64_vec(u64_vector *vec);
void erase_u64_vec(u64_vector *vec, usize index);
usize back_u64_vec(u64_vector *vec);
usize first_u64_vec(u64_vector *vec);
u64* data_u64_vec(u64_vector *vec);
usize capacity_u64_vec(u64_vector *vec);
usize size_u64_vec(u64_vector *vec);
void clear_u64_vec(u64_vector *vec);
bool empty_u64_vec(u64_vector *vec);
void resize_u64_vec(u64_vector *vec);
void shrink_to_fit_u64_vec(u64_vector *vec);

// f32 vector
f32_vector init_f32_vec();
void free_f32_vec(f32_vector *vec);
f32 at_f32_vec(f32_vector *vec, usize index);
void pop_f32_vec(f32_vector *vec);
void erase_f32_vec(f32_vector *vec, usize index);
f32 back_f32_vec(f32_vector *vec);
f32 first_f32_vec(f32_vector *vec);
f32* data_f32_vec(f32_vector *vec);
usize capacity_f32_vec(f32_vector *vec);
usize size_f32_vec(f32_vector *vec);
void clear_f32_vec(f32_vector *vec);
bool empty_f32_vec(f32_vector *vec);
void resize_f32_vec(f32_vector *vec);
void shrink_to_fit_f32_vec(f32_vector *vec);

// f64 vector
f64_vector init_f64_vec();
void free_f64_vec(f64_vector *vec);
f64 at_f64_vec(f64_vector *vec, usize index);
void pop_f64_vec(f64_vector *vec);
void erase_f64_vec(f64_vector *vec, usize index);
f64 back_f64_vec(f64_vector *vec);
f64 first_f64_vec(f64_vector *vec);
f64* data_f64_vec(f64_vector *vec);
usize capacity_f64_vec(f64_vector *vec);
usize size_f64_vec(f64_vector *vec);
void clear_f64_vec(f64_vector *vec);
bool empty_f64_vec(f64_vector *vec);
void resize_f64_vec(f64_vector *vec);
void shrink_to_fit_f64_vec(f64_vector *vec);

// usize vector
usize_vector init_usize_vec();
void free_usize_vec(usize_vector *vec);
usize at_usize_vec(usize_vector *vec, usize index);
void pop_usize_vec(usize_vector *vec);
void erase_usize_vec(usize_vector *vec, usize index);
usize back_usize_vec(usize_vector *vec);
usize first_usize_vec(usize_vector *vec);
usize* data_usize_vec(usize_vector *vec);
usize capacity_usize_vec(usize_vector *vec);
usize size_usize_vec(usize_vector *vec);
void clear_usize_vec(usize_vector *vec);
bool empty_usize_vec(usize_vector *vec);
void resize_usize_vec(usize_vector *vec);
void shrink_to_fit_usize_vec(usize_vector *vec);

// isize vector
isize_vector init_isize_vec();
void free_isize_vec(isize_vector *vec);
isize at_isize_vec(isize_vector *vec, usize index);
void pop_isize_vec(isize_vector *vec);
void erase_isize_vec(isize_vector *vec, usize index);
usize back_isize_vec(isize_vector *vec);
usize first_isize_vec(isize_vector *vec);
isize* data_isize_vec(isize_vector *vec);
isize capacity_isize_vec(isize_vector *vec);
isize size_isize_vec(isize_vector *vec);
void clear_isize_vec(isize_vector *vec);
bool empty_isize_vec(isize_vector *vec);
void resize_isize_vec(isize_vector *vec);
void shrink_to_fit_isize_vec(isize_vector *vec);

#ifdef VECTOR_IMPL

/*
-------------------------------------
------- init vector function -------
-------------------------------------
*/
i8_vector init_i8_vec() {
    i8_vector vec;

    vec.size = 0;
    vec.capacity = 4;
    vec.err = false;
    vec.data = malloc(vec.capacity * sizeof(i8));

    if (vec.data == NULL) {
        vec.err = true;
    }

    return vec;
}

i16_vector init_i16_vec() {
    i16_vector vec;

    vec.size = 0;
    vec.capacity = 4;
    vec.err = false;
    vec.data = malloc(vec.capacity * sizeof(i16));

    if (vec.data == NULL) {
        vec.err = true;
    }

    return vec;
}

i32_vector init_i32_vec() {
    i32_vector vec;

    vec.size = 0;
    vec.capacity = 4;
    vec.err = false;
    vec.data = malloc(vec.capacity * sizeof(i32));

    if (vec.data == NULL) {
        vec.err = true;
    }

    return vec;
}

i64_vector init_i64_vec() {
    i64_vector vec;

    vec.size = 0;
    vec.capacity = 4;
    vec.err = false;
    vec.data = malloc(vec.capacity * sizeof(i64));

    if (vec.data == NULL) {
        vec.err = true;
    }

    return vec;
}

u8_vector init_u8_vec() {
    u8_vector vec;

    vec.size = 0;
    vec.capacity = 4;
    vec.err = false;
    vec.data = malloc(vec.capacity * sizeof(u8));

    if (vec.data == NULL) {
        vec.err = true;
    }

    return vec;
}

u16_vector init_u16_vec() {
    u16_vector vec;

    vec.size = 0;
    vec.capacity = 4;
    vec.err = false;
    vec.data = malloc(vec.capacity * sizeof(u16));

    if (vec.data == NULL) {
        vec.err = true;
    }

    return vec;
}

u32_vector init_u32_vec() {
    u32_vector vec;

    vec.size = 0;
    vec.capacity = 4;
    vec.err = false;
    vec.data = malloc(vec.capacity * sizeof(u32));

    if (vec.data == NULL) {
        vec.err = true;
    }

    return vec;
}

u64_vector init_u64_vec() {
    u64_vector vec;

    vec.size = 0;
    vec.capacity = 4;
    vec.err = false;
    vec.data = malloc(vec.capacity * sizeof(u64));

    if (vec.data == NULL) {
        vec.err = true;
    }

    return vec;
}

f32_vector init_f32_vec() {
    f32_vector vec;

    vec.size = 0;
    vec.capacity = 4;
    vec.err = false;
    vec.data = malloc(vec.capacity * sizeof(f32));

    if (vec.data == NULL) {
        vec.err = true;
    }

    return vec;
}

f64_vector init_f64_vec() {
    f64_vector vec;

    vec.size = 0;
    vec.capacity = 4;
    vec.err = false;
    vec.data = malloc(vec.capacity * sizeof(f64));

    if (vec.data == NULL) {
        vec.err = true;
    }

    return vec;
}

usize_vector init_usize_vec() {
    usize_vector vec;

    vec.size = 0;
    vec.capacity = 4;
    vec.err = false;
    vec.data = malloc(vec.capacity * sizeof(usize));

    if (vec.data == NULL) {
        vec.err = true;
    }

    return vec;
}

isize_vector init_isize_vec() {
    isize_vector vec;

    vec.size = 0;
    vec.capacity = 4;
    vec.err = false;
    vec.data = malloc(vec.capacity * sizeof(isize));

    if (vec.data == NULL) {
        vec.err = true;
    }

    return vec;
}

/*
-------------------------------------
------- free vector function -------
-------------------------------------
*/
void free_i8_vec(i8_vector *vec) {
    if (vec == NULL) {
        return;
    }

    free(vec->data);

    vec->size = 0;
    vec->capacity = 0;
    vec->data = NULL;
}

void free_i16_vec(i16_vector *vec) {
    if (vec == NULL) {
        return;
    }

    free(vec->data);

    vec->size = 0;
    vec->capacity = 0;
    vec->data = NULL;
}

void free_i32_vec(i32_vector *vec) {
    if (vec == NULL) {
        return;
    }

    free(vec->data);

    vec->size = 0;
    vec->capacity = 0;
    vec->data = NULL;
}

void free_i64_vec(i64_vector *vec) {
    if (vec == NULL) {
        return;
    }

    free(vec->data);

    vec->size = 0;
    vec->capacity = 0;
    vec->data = NULL;
}

void free_u8_vec(u8_vector *vec) {
    if (vec == NULL) {
        return;
    }

    free(vec->data);

    vec->size = 0;
    vec->capacity = 0;
    vec->data = NULL;
}

void free_u16_vec(u16_vector *vec) {
    if (vec == NULL) {
        return;
    }

    free(vec->data);

    vec->size = 0;
    vec->capacity = 0;
    vec->data = NULL;
}

void free_u32_vec(u32_vector *vec) {
    if (vec == NULL) {
        return;
    }

    free(vec->data);

    vec->size = 0;
    vec->capacity = 0;
    vec->data = NULL;
}

void free_u64_vec(u64_vector *vec) {
    if (vec == NULL) {
        return;
    }

    free(vec->data);

    vec->size = 0;
    vec->capacity = 0;
    vec->data = NULL;
}

void free_f32_vec(f32_vector *vec) {
    if (vec == NULL) {
        return;
    }

    free(vec->data);

    vec->size = 0;
    vec->capacity = 0;
    vec->data = NULL;
}

void free_f64_vec(f64_vector *vec) {
    if (vec == NULL) {
        return;
    }

    free(vec->data);

    vec->size = 0;
    vec->capacity = 0;
    vec->data = NULL;
}

void free_usize_vec(usize_vector *vec) {
    if (vec == NULL) {
        return;
    }

    free(vec->data);

    vec->size = 0;
    vec->capacity = 0;
    vec->data = NULL;
}

void free_isize_vec(isize_vector *vec) {
    if (vec == NULL) {
        return;
    }

    free(vec->data);

    vec->size = 0;
    vec->capacity = 0;
    vec->data = NULL;
}

/*
-------------------------------------
------- at vector function -------
-------------------------------------
*/
i8 at_i8_vec(i8_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return 0;
    }

    return vec->data[index];
}

i16 at_i16_vec(i16_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return 0;
    }

    return vec->data[index];
}

i32 at_i32_vec(i32_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return 0;
    }

    return vec->data[index];
}

i64 at_i64_vec(i64_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return 0;
    }

    return vec->data[index];
}

u8 at_u8_vec(u8_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return 0;
    }

    return vec->data[index];
}

u16 at_u16_vec(u16_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return 0;
    }

    return vec->data[index];
}

u32 at_u32_vec(u32_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return 0;
    }

    return vec->data[index];
}

u64 at_u64_vec(u64_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return 0;
    }

    return vec->data[index];
}

f32 at_f32_vec(f32_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return 0;
    }

    return vec->data[index];
}

f64 at_f64_vec(f64_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return 0;
    }

    return vec->data[index];
}

usize at_usize_vec(usize_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return 0;
    }

    return vec->data[index];
}

isize at_isize_vec(isize_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return 0;
    }

    return vec->data[index];
}

/*
-------------------------------------
------- pop vector function -------
-------------------------------------
*/
void pop_i8_vec(i8_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return;
    }

    vec->size--;
}

void pop_i16_vec(i16_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return;
    }

    vec->size--;
}

void pop_i32_vec(i32_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return;
    }

    vec->size--;
}

void pop_i64_vec(i64_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return;
    }

    vec->size--;
}

void pop_u8_vec(u8_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return;
    }

    vec->size--;
}

void pop_u16_vec(u16_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return;
    }

    vec->size--;
}

void pop_u32_vec(u32_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return;
    }

    vec->size--;
}

void pop_u64_vec(u64_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return;
    }

    vec->size--;
}

void pop_f32_vec(f32_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return;
    }

    vec->size--;
}

void pop_f64_vec(f64_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return;
    }

    vec->size--;
}

void pop_usize_vec(usize_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return;
    }

    vec->size--;
}

void pop_isize_vec(isize_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return;
    }

    vec->size--;
}

/*
-------------------------------------
------- erase vector function -------
-------------------------------------
*/
void erase_i8_vec(i8_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return;
    }

    for (usize i = index; i + 1 < vec->size; i++) {
        vec->data[i] = vec->data[i + 1];
    }

    vec->size--;
}

void erase_i16_vec(i16_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return;
    }

    for (usize i = index; i + 1 < vec->size; i++) {
        vec->data[i] = vec->data[i + 1];
    }

    vec->size--;
}

void erase_i32_vec(i32_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return;
    }

    for (usize i = index; i + 1 < vec->size; i++) {
        vec->data[i] = vec->data[i + 1];
    }

    vec->size--;
}

void erase_i64_vec(i64_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return;
    }

    for (usize i = index; i + 1 < vec->size; i++) {
        vec->data[i] = vec->data[i + 1];
    }

    vec->size--;
}

void erase_u8_vec(u8_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return;
    }

    for (usize i = index; i + 1 < vec->size; i++) {
        vec->data[i] = vec->data[i + 1];
    }

    vec->size--;
}

void erase_u16_vec(u16_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return;
    }

    for (usize i = index; i + 1 < vec->size; i++) {
        vec->data[i] = vec->data[i + 1];
    }

    vec->size--;
}

void erase_u32_vec(u32_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return;
    }

    for (usize i = index; i + 1 < vec->size; i++) {
        vec->data[i] = vec->data[i + 1];
    }

    vec->size--;
}

void erase_u64_vec(u64_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return;
    }

    for (usize i = index; i + 1 < vec->size; i++) {
        vec->data[i] = vec->data[i + 1];
    }

    vec->size--;
}

void erase_f32_vec(f32_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return;
    }

    for (usize i = index; i + 1 < vec->size; i++) {
        vec->data[i] = vec->data[i + 1];
    }

    vec->size--;
}

void erase_f64_vec(f64_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return;
    }

    for (usize i = index; i + 1 < vec->size; i++) {
        vec->data[i] = vec->data[i + 1];
    }

    vec->size--;
}

void erase_usize_vec(usize_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return;
    }

    for (usize i = index; i + 1 < vec->size; i++) {
        vec->data[i] = vec->data[i + 1];
    }

    vec->size--;
}

void erase_isize_vec(isize_vector *vec, usize index) {
    if (vec == NULL || index >= vec->size) {
        return;
    }

    for (usize i = index; i + 1 < vec->size; i++) {
        vec->data[i] = vec->data[i + 1];
    }

    vec->size--;
}

/*
-------------------------------------
------- back vector function -------
-------------------------------------
*/
usize back_i8_vec(i8_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[vec->size - 1];
}

usize back_i16_vec(i16_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[vec->size - 1];
}

usize back_i32_vec(i32_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[vec->size - 1];
}

usize back_i64_vec(i64_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[vec->size - 1];
}

usize back_u8_vec(u8_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[vec->size - 1];
}

usize back_u16_vec(u16_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[vec->size - 1];
}

usize back_u32_vec(u32_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[vec->size - 1];
}

usize back_u64_vec(u64_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[vec->size - 1];
}

usize back_f32_vec(f32_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[vec->size - 1];
}

usize back_f64_vec(f64_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[vec->size - 1];
}

usize back_usize_vec(usize_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[vec->size - 1];
}

usize back_isize_vec(isize_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[vec->size - 1];
}

/*
-------------------------------------
------- front vector function -------
-------------------------------------
*/
usize first_i8_vec(i8_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[0];
}

usize first_i16_vec(i16_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[0];
}

usize first_i32_vec(i32_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[0];
}

usize first_i64_vec(i64_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[0];
}

usize first_u8_vec(u8_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[0];
}

usize first_u16_vec(u16_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[0];
}

usize first_u32_vec(u32_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[0];
}

usize first_u64_vec(u64_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[0];
}

f32 first_f32_vec(f32_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[0];
}

f64 first_f64_vec(f64_vector *vec) {
    if (vec == NULL || vec->size == 0) {
        return 0;
    }

    return vec->data[0];
}


#endif // VECTOR_IMPL
#endif // VECTOR_H