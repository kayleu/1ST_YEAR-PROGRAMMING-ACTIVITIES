#include <stdio.h>

void subtraction() {

    float num1, num2, result;
    int userChoice;

    printf("-----------------------------------------------------\n");
    printf("\t\t  SUBTRACTION (-)\n");
    printf("-----------------------------------------------------\n");

    do {


        printf("\nEnter the first number: \t\t");
        scanf("%f", &num1);

        printf("\nEnter the second number: \t\t");
        scanf("%f", &num2);

        result = num1 - num2;

        printf("\nThe result of %s%g%s + %s%g%s is: %g\n",
            (num1 < 0) ? "(" : "", num1, (num1 < 0) ? ")" : "",
            (num2 < 0) ? "(" : "", num2, (num2 < 0) ? ")" : "",
            result);

        printf("\n-----------------------------------------------------");
        printf("\nDo you want to play again? (1 for Yes / 0 for No): ");
        scanf("%d", &userChoice);
        printf("-----------------------------------------------------\n");

    } while (userChoice != 0);

}
