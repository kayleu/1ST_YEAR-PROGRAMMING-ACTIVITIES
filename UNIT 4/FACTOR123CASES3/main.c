#include <stdio.h>
#include <stdlib.h>

int DWARF(int non, int sum) // Calling a Function to DWARF to determine an integer
                            // if it is a DWARF or NOT DWARF.
{
     (sum > non/2) ? printf("\n%d is DWARF\n", non) : printf("\n%d is NOT DWARF\n", non);
} // using TERNARY OPERATOR to run the function and will print DWARF if true and NOT DWARF if false.

int main()
{
    int non, sum = 0; // DECLARING VARIABLES
    char name[80];

    printf("Please indicate/input your name: "); //getting the name of the user.
    scanf("%s", name); //SCANNING
    printf("Please enter your preferred non-negative integer: "); //getting the preferred number of the user
    scanf("%d", &non); //SCANNING
    printf("\n%s, the factors of '%d' is listed here:\n", name, non); //PREVIEWING THE FACTORS



    for (int i = 1; i <= non; i++) //PROCESSING using FOR LOOPS with if statement
    {
        if (non % i == 0)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }

    printf("\nAnd the sum of its factors is %d \n", sum); //DISPLAYING THE SUM OF THE FACTORS
    DWARF(non, sum);

    return 0;
}
