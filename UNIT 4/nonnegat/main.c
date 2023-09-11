#include <stdio.h>
#include <stdlib.h>

int main()
{
   int non; // DECLARING VARIABLES  (integer and character)
   char name [80];
   printf("Please enter your name: "); // getting the name of the user
   scanf("%s", name); //SCANNING
   printf("Please input your non-negative integer: "); // getting the number inputted by the user
   scanf("%d", &non); // SCANNING
   printf("%s, the number '%d' you inputted is equals to = ", name, non); // RESULT
   for (int i = 2; i <= non;i++){ // PROCESSING USING FOR AND WHILE LOOP
        while (non % i ==0){
            printf("%d ", i);
            non /= i;
          if (non !=1) // if-else condition
            printf(" x "); // will be executed if the condition is true
          else
            printf("\n");
        }
   }
    return 0;
}
