#include <stdio.h>
#include "major1.h"

void palindrome(int num){
    while (num<=0 || num >= 2000000000){
        printf("Enter a positive integer less than 2 billion: ");
        scanf("%d",&num);
    }
    char binary[33];
    binary[32]='\0';

    for(int i = 31;  i>=0; i--){
        binary[31-i] = ((num >> i) & 1) ? '1' : '0';
   }
   printf("The binary representation is: %s\n", binary);

   int isPalindrome = 1;
   for(int i =0; i<16; i++){
        int leftBit = (num >> (31-i)) & 1;
        int rightBit = (num >> i) & 1;

        if(leftBit != rightBit){
            isPalindrome = 0; 
            break;
        }

   }
   if(isPalindrome == 1){
        printf("%d is a palindrome\n ", num);
   }
   else{
        printf("%d is not a palidrome\n", num);
   }

}


