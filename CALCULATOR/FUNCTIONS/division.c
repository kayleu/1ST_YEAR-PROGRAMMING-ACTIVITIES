#include <stdio.h>

void division() {
    
    float num1, num2, result, userChoice;

    printf("-----------------------------------------------------\n");
    printf("\t\t    DIVISION (/)\n");
    printf("-----------------------------------------------------\n");

    do {
        
        printf("\nEnter the first number: \t\t");
        scanf("%f", &num1);

        printf("\nEnter the second number: \t\t");
        scanf("%f", &num2);

        if (num2 != 0) {
            
            result = num1 / num2;

            printf("\nThe result of %s%g%s + %s%g%s is: %g\n", 
                (num1 < 0) ? "(" : "", num1, (num1 < 0) ? ")" : "", 
                (num2 < 0) ? "(" : "", num2, (num2 < 0) ? ")" : "", 
                result);
        }

        else {
            printf("\nUndefined. Any number divided by zero is undefined.\n");
        }

        printf("\n-----------------------------------------------------");
        printf("\nDo you want to play again? (1 for Yes / 0 for No): ");
        scanf("%d", &userChoice);
        printf("-----------------------------------------------------\n");

    } while (userChoice != 0);

}


