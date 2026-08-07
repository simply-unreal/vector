#include <stdio.h>
#include "short_types.h"

#define VECTOR_IMPL
#include "vector.h"

int main() {
    i8_vector vec = init_i8_vec();
    printf("%zu\n", back_i8_vec(&vec));
    free_i8_vec(&vec);
}