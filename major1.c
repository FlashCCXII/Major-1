#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "major1.h"

int main() {
    unsigned int choice, num;
    menu();

    while(1) {
        choice = getNumber("\nEnter your choice: ", 10);
        if (choice >= 1  && choice <= 5)
            num = getNumber("Enter a positive integer less than 2 billion: ", 2000000000);
        else {
            choice = 0;
        }
        switch (choice) {
            case 1:     power(num);             break;
            case 2:     reverse(num);           break;
            case 3:     replace(num);           break;
            case 4:     palindrome(num);        break;
            case 5:     printf ("Exiting program...");       return 0;
            default:    printf ("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void menu() {
    printf("\nMenu:\n");
    printf("1.  Power\n");
    printf("2.  Reverse\n");
    printf("3.  Replace\n");
    printf("4.  Palindrome\n");
    printf("5. Exit\n");
}

unsigned int getNumber(char *prompt, unsigned int max) {
    unsigned int num;
    char input[30];

    while (1) {
        printf("%s", prompt);
        fgets(input, sizeof(input), stdin);
        num = atoi(input);
        if (num <= max) {
            return num;
        }
        else if (num <= 0){
            printf("Input does not reach minimum allowed value. Please try again.\n");
        }
        else {
        printf("Input exceeds maximum allowed value. Please try again.\n");
        }
    }
}

