#include <stdint.h>
#include "add.h"

void add(uint32_t a, uint32_t b) {
    uint32_t res = a + b;

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", a, a, b, b, res, res);
}
