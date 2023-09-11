#include <stdio.h>
int is_prime(int n);

int main ()
{
 int n, result; // DECLARING VARIABLES  (integer and character)
   char name [80];
   printf("Please enter your name: "); // getting the name of the user
   scanf("%s", name); //SCANNING
   printf("Please input your non-negative integer: "); // getting the number inputted by the user
   scanf("%d", &n); // SCANNING
   result = is_prime(n);
   if (result)
        printf("The number you inputted is a prime number");
   else 
        printf("The number you inputted is not a prime number");
   return 0;
}

int is_prime (int n){
    for (int k = 2; k < n; k++) { //PROCESSING USING FOR AND WHILE LOOP
        if (n % k == 0) {
            return 0;
        }
    }
    return 1;
}