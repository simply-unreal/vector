#ifndef VECTOR_H
#define VECTOR_H

#include <stdio.h>

typedef struct { usize size; usize capacity; i8 *data; } i8_vector;
typedef struct { usize size; usize capacity; i16 *data; } i16_vector;
typedef struct { usize size; usize capacity; i32 *data; } i32_vector;
typedef struct { usize size; usize capacity; i64 *data; } i64_vector;

typedef struct { usize size; usize capacity; u8 *data; } u8_vector;
typedef struct { usize size; usize capacity; u16 *data; } u16_vector;
typedef struct { usize size; usize capacity; u32 *data; } u32_vector;
typedef struct { usize size; usize capacity; u64 *data; } u64_vector;

typedef struct { usize size; usize capacity; f32 *data; } f32_vector;
typedef struct { usize size; usize capacity; f64 *data; } f64_vector;

typedef struct { usize size; usize capacity; usize *data; } usize_vector;
typedef struct { usize size; usize capacity; isize *data; } isize_vector;

#endif