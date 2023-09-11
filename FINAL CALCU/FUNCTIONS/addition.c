#include <stdio.h>

void addition() {
    float num1, num2, sum;
    char choice;

        printf("--------------------------------------------------------------------------------------------\n");
        printf("\t\t\t  You have chosen [3] ADDITION ( + )\n");
        printf("--------------------------------------------------------------------------------------------\n");

    do {
        printf("\n\nEnter first number (ADDEND): \t\t");
        scanf("%f", &num1);
        getchar();

        printf("\nEnter second number (ADDEND): \t\t");
        scanf("%f", &num2);
        getchar();

        sum = num1 + num2;

        printf("--------------------------------------------------------------------------------------------");
        printf("\nThe SUM of %g and %g is \t\t%g\n", num1, num2, sum);

        printf("--------------------------------------------------------------------------------------------\n");
        printf("\nDo you want to try again? Enter [Y] for Yes or press ANY KEY to exit the addition program.\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);
  } while (choice == 'Y' || choice == 'y');
}

//int main() {
 //   addition();

 //   return 0;
// }
