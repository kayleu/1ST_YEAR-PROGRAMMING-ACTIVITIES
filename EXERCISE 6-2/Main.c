#include <stdio.h>

int Prime(int non);

int main ()
{
 int non, result; // DECLARING VARIABLES  (integer and character)
   char name [80];
   printf("Please enter your name: "); // getting the name of the user
   scanf("%s", name); //SCANNING
   printf("Please input your non-negative integer: "); // getting the number inputted by the user
   scanf("%d", &non); // SCANNING
   if (non > 0)
        printf("Your number is a non negative integer.");
   else {
        printf("Your number is invalid. Please input a non negative integer only. Thank you for using the program!");
        
   return 0;
   }
   result = Prime(non);
   if (result == 0)
        printf("\nThe number you inputted is a prime number");
   else 
        printf("\nThe number you inputted is not a prime number.");
   return 0;
}

int Prime (int non){
    for (int i = 2; i < non; i++) { //PROCESSING USING FOR AND WHILE LOOP
        if (non % i == 0) {
            return 1;
        }
    }
    return 0;
}