#include <stdio.h>
#include <stdlib.h>

void sum(int x[ ]) // declaring variables
{ int n;
 int sum_even;
 int sum_odd;



    for(n=0; x [n]!=0; n++){ // for loop that will go to the specified given array
        if (n % 2 == 0) // if condition if the array is even
            sum_even +=n; // if even, it will be plus to the even number.
        else
            sum_odd += n; // else it is odd and will be plus to the odd number.
    }

    printf("The sum of even elements are: %d", sum_even); // printing the even elements
    printf("The sum of odd elements are: %d", sum_odd); // printing the odd elements
}
