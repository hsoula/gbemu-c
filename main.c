#include <stdio.h>
#include "common.h"
int main(void) {

    u8 b = 0xff;
    u8 s = 0x00;
    u8 r = 0x00;
    s = __builtin_add_overflow(b, 1, &r);
    b = r;
    printf("%x %x %lu\n",b, s, sizeof(char));

}
