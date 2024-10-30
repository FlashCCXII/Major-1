#include "major1.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void power(unsigned int num) {
    if (num < 0 || num >= 2000000000) {
        printf("Error: The number is out of the valid range.\n");
        return;
    }

    if (num == 0) {
        printf("0 is not a power of 2\n");
        printf("Next higher integer that is power of 2 is: 1\n");
        return;
    }

    if ((num & (num-1)) == 0) {
        printf("%u is a power of 2\n", num);
        return;
    }
    
    else {
        unsigned int nextPower = 1;
        while (nextPower < num) {
            nextPower <<= 1;
        }
        
        printf("%u is not a power of 2\n", num);
        printf("Next higher integer that is a power of 2 is: %d\n", nextPower);
    }
}
