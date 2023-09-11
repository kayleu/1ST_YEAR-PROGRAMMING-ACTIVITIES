#include <stdio.h>
#include <stdlib.h>

int Factorial (int non); // FUNCTION PROTOTYPE

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
        printf("Your number is invalid. Please input a non negative integer only. Thank you for using the program");
        
   return 0;
   }
   result = Factorial(non);
   printf("\nThe result of the factorial of %d is equals to: %d", non, result);
    return 0;
}

int Factorial (int non){ // function declaration
    int result = 1;
    for (int i = 1; i <= non; i++){ //LOOPING TO GET THE FACTORIAL INTEGERS OF THE GIVEN INTEGER
        result *= i; //TO COMPUTE THE FACTORIAL RESULT OF THE GIVEN INTEGER
    }
    return result; //RETURN THE VALUE OF result
}

