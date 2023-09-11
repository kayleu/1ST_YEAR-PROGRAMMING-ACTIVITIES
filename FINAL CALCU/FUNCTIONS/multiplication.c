#include <stdio.h>

void multiplication() {

    float num1, num2, product;
    char choice;

    printf("--------------------------------------------------------------------------------------------\n");
    printf("\t\t\t You have chosen [1] MULTIPLICATION ( * )\n");
    printf("--------------------------------------------------------------------------------------------\n");

    do {

        printf("\nEnter the first number (MULTIPLICAND): \t\t");
        scanf("%f", &num1);
        getchar();
        printf("\nEnter the second number (MULTIPLIER) : \t\t");
        scanf("%f", &num2);
        getchar();

        printf("--------------------------------------------------------------------------------------------");
        product = num1 * num2;

        printf("\nThe product of %g * %g is: \t\t\t%g\n\n", num1,num2, product);

        printf("\nDo you want to try again? Enter [Y] for Yes or press ANY KEY to exit the multiplication program.\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

}
