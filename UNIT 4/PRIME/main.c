#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i; // Declaring variables for Integer
    char name [80]; // Declaring Character Variable
    printf("Please input your name: "); // Getting the name of the User
    scanf("%s", name); // SCANNING
    printf("Enter a non-negative integer: "); //Getting the non-negative integer
    scanf("%d", &n); //SCANNING

    printf("%s, the prime factors of your given number %d are: ", name,n);
    for (i = 2; i <= n; i++) { //PROCESSING USING FOR AND WHILE LOOP
        while (n % i == 0) {
            printf("%d ", i); // PRINT RESULT
            n /= i;
        }
    }


    return 0;
}
