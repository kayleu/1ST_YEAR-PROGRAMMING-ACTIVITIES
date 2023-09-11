#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,m, count; //DECLARING THE VARIABLES
    printf("Please enter the value of beginning number 'N1': "); // getting the first num
    scanf("%d",&n1); //SCANNING
     printf("Please enter the value of ending number 'N2': "); // getting the second input
    scanf("%d",&n2); // SCANNING
     printf("Please enter the value of M: "); // getting the value of m (where to divide the n1 & n2)
    scanf("%d",&m); // SCANNING
    printf("Here are the list of the number who is divisible to the given m value: ");
    for (; n1 <= n2; n1++){ // PROCESSING THE GIVEN IN FOR LOOP
        if( n1 % m == 0){
            printf(" %d",n1); //RESULT IF THE GIVEN IS TRUE TO CONDITION
            count++;
        }
    }
    printf("\nThe count of the numbers which is divisible by given m value is %d", count); // Number of counts of the number whose divided to value of M


    return 0;
}
