#include <stdio.h>
#include "short_types.h"

#define VECTOR_IMPL
#include "vector.h"

int main() {
    i8_vector vec = init_i8_vec();
    push_i8_vec(&vec, 0);
    push_i8_vec(&vec, 1);
    push_i8_vec(&vec, 2);
    push_i8_vec(&vec, 3);
    push_i8_vec(&vec, 4);
    push_i8_vec(&vec, 5);
    printf("cpcty: %zu\n", capacity_i8_vec(&vec));
    printf("size: %zu\n", size_i8_vec(&vec));
    printf("0: %d\n", at_i8_vec(&vec, 0));
    printf("1: %d\n", at_i8_vec(&vec, 1));
    printf("2: %d\n", at_i8_vec(&vec, 2));
    printf("3: %d\n", at_i8_vec(&vec, 3));
    printf("4: %d\n", at_i8_vec(&vec, 4));
    printf("5: %d\n", at_i8_vec(&vec, 5));
    free_i8_vec(&vec);
}