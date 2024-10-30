#include <stdio.h>
#include "major1.h"

int reverse(int num) {
        unsigned int reversed = 0;
        

        for (int i = 0; i < 32; i++) {

            reversed <<= 1;
            reversed |= (num & 1);
            num >>= 1;
        }

        printf("%d Reversed bits result is: %u\n", reversed);
        
        return reversed;
        
        }
