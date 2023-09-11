#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Through Header
// #include "multiplication.h"
// #include "division.h"
// #include "addition.h"
// #include "subtraction.h"

// Direct Address
#include "C:\Users\Kyle\Desktop\C LANG\ACTs\CALCULATOR\FUNCTIONS\multiplication.c"
#include "C:\Users\Kyle\Desktop\C LANG\ACTs\CALCULATOR\FUNCTIONS\division.c"
#include "C:\Users\Kyle\Desktop\C LANG\ACTs\CALCULATOR\FUNCTIONS\addition.c"
#include "C:\Users\Kyle\Desktop\C LANG\ACTs\CALCULATOR\FUNCTIONS\subtraction.c"

int main() {

    int choice;

    do {

        system("cls");
        printf("MDAS Calculator\n");
        printf("\nMENU:\n");
        printf("1. Multiplication\n");
        printf("2. Division\n");
        printf("3. Addition\n");
        printf("4. Subtraction\n");
        printf("5. Quit\n");

        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);
        system("cls");

        switch (choice) {

            case 1:
                multiplication();
                break;
            case 2:
                division();
                break;
            case 3:
                addition();
                break;
            case 4:
                subtraction();
                break;
            case 5:
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }

            printf("\n");

    } while (choice != 5);

    printf("Thank you for using our program!");

    return 0;
}
