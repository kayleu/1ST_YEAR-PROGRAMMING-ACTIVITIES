#include <stdio.h>

void multiplication() {

    float num1, num2, product;
    int userChoice;

    printf("-----------------------------------------------------\n");
    printf("\t\t You have chosen [3] MULTIPLICATION ( * )\n");
    printf("-----------------------------------------------------\n");

    do {

        printf("\nEnter the first number: \t\t");
        scanf("%f", &num1);
        getchar();
        printf("\nEnter the second number: \t\t");
        scanf("%f", &num2);
        getchar();

        printf("-----------------------------------------------------");
        product = num1 * num2;

        printf("\nThe product of %g * %g is: %g\n\n", num1,num2, product);

        printf("\nDo you want to try again? Enter [Y] for Yes or press ANY KEY to exit the subtraction program.\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

}
