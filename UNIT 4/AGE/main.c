#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age; // DECLARING VARIABLE
    printf("Please enter your age: "); // getting the age of the user
    scanf("%d", &age); // SCANNING
    if (age >= 0 && age <= 12) // first if condition
        printf("C - you are considered as a child."); // will be executed if the first condition is true
    else if (age >= 13 && age <= 19)
        printf("T - you are considered as a teen-ager."); // will be executed if the second condition is true
    else if (age >= 20)
        printf("A - you are considered as an adult."); // will be executed if the third condition is true
    return 0;
}
