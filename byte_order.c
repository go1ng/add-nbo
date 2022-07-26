#include <stdint.h>
#include "byte_order.h"

uint32_t order(uint32_t val) {
    uint32_t a = (val >> 24) & 0x000000ff;
    uint32_t b = (val >> 8) & 0x0000ff00;
    uint32_t c = (val << 8) & 0x00ff0000;
    uint32_t d = (val << 24) & 0xff000000;

    return a | b | c | d;
}
