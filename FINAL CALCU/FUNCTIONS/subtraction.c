#include <stdio.h>


void subtraction()
{

  float num1, num2, difference;
  char choice;

  printf("--------------------------------------------------------------------------------------------\n");
  printf("\t\t\t You have chosen [4] SUBTRACTION (-)\n");
  printf("--------------------------------------------------------------------------------------------\n");

  do {
    //Asking for first input of the user
    printf("\nPlease enter the first number (MINUEND): \t\t");
    scanf("%f", &num1);
    getchar();


    //Asking for the second input of the user
    printf("\nPlease enter the second number (SUBTRAHEND): \t\t");
    scanf("%f", &num2);
    getchar();


    printf("--------------------------------------------------------------------------------------------");
    difference = num1 - num2;
    printf("\n\nThe difference of %g and %g is: \t\t\t%g\n\n", num1, num2, difference);

    printf("\nDo you want to try again? Enter [Y] for Yes or press ANY KEY to exit the subtraction program.\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

}


