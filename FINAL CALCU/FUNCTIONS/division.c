#include <stdio.h>

void division()
{
    float num1, num2, quotient;
    char UserChoice;

    printf("--------------------------------------------------------------------------------------------\n");
    printf("\t\t\t You have chosen [2] DIVISION ( / )\n");
    printf("--------------------------------------------------------------------------------------------\n");

    do {
        printf("\nEnter the first number (DIVIDEND): \t\t");
        scanf("%f", &num1);
        getchar();

        printf("\nEnter the second number (DIVISOR): \t\t");
        scanf("%f", &num2);
        getchar();

        printf("--------------------------------------------------------------------------------------------");
        quotient = num1 / num2;
        printf("\nThe quotient of %g / %g is: \t\t\t%g\n\n", num1, num2, quotient);

        printf("\nDo you want to try again? Enter [Y] for Yes or press ANY KEY to exit the division program.\n");
        printf("Enter your choice: ");
        scanf("%c", &UserChoice);
        printf("--------------------------------------------------------------------------------------------\n");
    } while (UserChoice == 'Y' || UserChoice == 'y');
}
