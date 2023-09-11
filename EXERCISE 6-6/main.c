#include <stdio.h>

int rel_prime(int i, int j); //FUNCTION PROTOTYPE

int main()
{
    //declaring variables
    int i,j;
    int result; 

    printf("Please input your two positive integers: "); //getting the positive integers of the user
    scanf("%d %d", &i, &j);
    result = rel_prime (i,j); // CALLING the function
    if (result) //if statement that will display the result if one of those conditions became true.
        printf("The numbers you inputted is relatively prime.");
    else 
        printf("The number you inputted is not a relatively prime.");
    return 0;
}



int rel_prime(int i, int j) // FUNCTION DEFINITION
{
   for (int k = 2; k < i && k < j; k++) { //PROCESSING USING FOR AND WHILE LOOP
        if (i % k == 0 && j % k == 0) {
            return 0;
        }
    }
    return 1;
}
