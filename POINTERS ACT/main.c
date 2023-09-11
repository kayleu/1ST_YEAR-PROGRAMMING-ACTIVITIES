#include <stdio.h>

void sum(double b[]){
    int n; // Declaring variables
    double *sum_even;
    double *sum_odd;
    double EvenSum = 0;
    double OddSum = 0;

    sum_even = &EvenSum; // getting the access of EvenSum to sum_even
    sum_odd = &OddSum; // getting the access of OddSum to sum_odd

    for (n=0;b[n] != 0; n++) // For loop that will check every array
        {
            if (n % 2 == 0) // check if it is even and will be plus.
                *sum_even += b[n];
            else            // if it was odd, the odd will be plus.
                *sum_odd += b[n];
        }

    printf ("The sum of even indexed elements: %.2lf\n", *sum_even); //printing sum of even indexed elements
    printf("The sum of odd indexed elements: %.2lf\n", *sum_odd); //printing sum of odd indexed elements


    }

