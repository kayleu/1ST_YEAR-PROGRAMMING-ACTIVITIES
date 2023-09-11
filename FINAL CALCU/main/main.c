#include <stdio.h>
#include "C:\Users\Kyle\Desktop\C LANG\ACTs\FINAL CALCU\FUNCTIONS\multiplication.c"
#include "C:\Users\Kyle\Desktop\C LANG\ACTs\FINAL CALCU\FUNCTIONS\division.c"
#include "C:\Users\Kyle\Desktop\C LANG\ACTs\FINAL CALCU\FUNCTIONS\addition.c"
#include "C:\Users\Kyle\Desktop\C LANG\ACTs\FINAL CALCU\FUNCTIONS\subtraction.c"

void Printborder(){
  printf("\n--------------------------------------------------------------------------------------------\n");
}
int main() {
  int Userchoice;
  char choiceexit;
  char name[80];

  printf("Please enter your name: ");
  scanf("%s", &name);

Printborder();

do  {

  printf("\nHello, %s! Welcome to MDAS CALCULATOR!\nIn order to use this application, you must follow these guidelines:  ", name);
  printf("\n\n 1. Please select a number from 1 to 5 to indicate the desired operation for the calculator.");
  printf("\n 2. To perform the chosen operation, please input two (2) numbers.");
  printf("\n 3. Lastly, you can exit and terminate the program by typing 5.\n");

Printborder();

  printf("\t\t\t\t\t\tMDAS CALCULATOR");
  printf("\n\n\t\t\t\t\t Enter 1 for Multiplication [1]\n");
  printf("\t\t\t\t\t Enter 2 for Division [2]\n");
  printf("\t\t\t\t\t Enter 3 for Addition [3]\n");
  printf("\t\t\t\t\t Enter 4 for Subtraction [4]\n");
  printf("\t\t\t\t\t Enter 5 for Exit [5]\n");

  printf("\nYour choice: ");
  scanf("%d", &Userchoice);
  getchar();

Printborder();

   switch (Userchoice){

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
       printf("Are you sure you want to exit the program? Press [Y] if Yes. Press [ANY KEY] if No.\t");
       scanf(" %c", &choiceexit);
       if (choiceexit == 'Y' || 'y')
       {
       return 0;
       }
       break;
     default:
       printf("Invalid choice.\n");
       break;
  }
    printf("\n");
  } while (Userchoice != 5);

  printf("Thank you for using the program!");
  return 0;
}
