#include <stdio.h>
#include "major1.h"

unsigned int reverse(unsigned int num) {
    unsigned int reversed = 0;
    unsigned int original = num;

    for (int i = 0; i < 32; i++) {
        reversed <<= 1;             
        reversed |= (num & 1);    
        num >>= 1;                
    }

    printf("%u with bits reversed is: %u\n", original, reversed);
    
    return reversed;
}
