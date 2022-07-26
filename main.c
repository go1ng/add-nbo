#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>
#include "add.h"
#include "byte_order.h"

int main(int argc, char * argv[]) {
    uint32_t a = 0;
    uint32_t b = 0;

    FILE *fp1 = fopen(argv[1], "rb");
    FILE *fp2 = fopen(argv[2], "rb");

    fread(&a, sizeof(uint32_t), 1, fp1);
    fread(&b, sizeof(uint32_t), 1, fp2);

    a = order(a);
    b = order(b);
    add(a, b);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
