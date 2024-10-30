#include <stdio.h>
#include "major1.h"

void replace(unsigned int num) {
    unsigned int replaceNum = num, replaceMask;
    int index;

	while(1) {
        if (replaceNum > 0 && replaceNum < 2000000000) {
            break;
        }

        printf("Input a positive integer mask less than 3 billion: ");
        scanf("%u", &replaceMask);
        if (replaceMask > 0 && replaceMask < 3000000000) {
            break;
        }

        printf("Enter bit replacement position from mask (0-indexed): ");
        scanf("%d", &index);
        if (index >= 0 && index <= 31) {
            break;
        }
	}

    int temp = (replaceMask >> index) & 1;

    if (temp == 1) {
        temp = temp << index;
        replaceNum |= temp;
    } else {
        unsigned int flag = 4294967295;  // Use unsigned int to avoid overflow
        temp = 1 << index;
        flag = flag ^ temp;
        replaceNum &= flag;
    }

    printf("New integer with bit %d from mask %u is: %u\n", index, replaceMask, replaceNum);
}
