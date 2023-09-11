#include <stdio.h>


int KOMPUTE(int N, int *result); //FUNCTION PROTOTYPE


int main () 
{
   // declaring variables
   int N, sum;
   int result;
   
   printf("Enter a positive integer: "); //getting the integer
   scanf("%d", &N); // SCANNING
   if (N > 0) //if true, it will continue to the next step.
        printf("Your number is a non negative integer.");
   else {
        printf("Your number is invalid. Please input a non negative integer only. Thank you for using the program");
    return 0;
   }
   printf("\nDivisors of %d are: ", N); // DISPLAYING THE DIVISORS
   sum = KOMPUTE (N, &result); //CALLING THE FUNCTION
   printf("\nSum of proper divisors: %d", sum); // PRINTING THE SUM OF DIVISORS
   if (result == 1) // results
    printf("\n%d == %d is PERFECT", sum,N);
   else if (result == 2)
    printf("\n%d < %d is DEFICIENT",sum,N);
   else
    printf("\n%d > %d is ABUNDANT", sum,N);
    

   return 0;
     
}

int KOMPUTE(int N, int *result) //FUNCTION DEFINITION
{
   int sum = 0;
    for (int i = 1; i < N; ++i) {
      if (N % i == 0) {
         printf("%d ", i);
         sum += i;
      }
     }
     if (sum == N)
        *result = 1;
     else if (sum < N)
        *result = 2;
     else 
        *result = 3;
     return sum; 
}
