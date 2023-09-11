#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;
    printf("Please indicate your three numbers with separated spaces: "); //entering the three numbers of user
    scanf("%d %d %d", &n1, &n2, &n3); // SCANNING


    if (n1 >= n2 && n1 >= n3) { // first condition
        if (n2>=n3) // nested if condition
            printf ("The three integers are assigned in descending order %d, %d, %d", n1, n2,n3); // result
        else // command if the nested if condition became false
            printf ("The three integers are assigned in descending order %d, %d, %d", n1, n3,n2); // result
    }
    if (n2 >= n3 && n2 >= n1){ // second condition
        if (n3>=n1) // nested if condition
            printf ("The three integers are assigned in descending order %d, %d, %d", n2, n3,n1); // result
        else // command if the nested if condition became false
            printf ("The three integers are assigned in descending order %d, %d, %d", n2, n1,n3); // result
    }
    if (n3 >= n1 && n3 >= n2){ // third condition
        if (n1>=n2) // nested if condition
            printf ("The three integers are assigned in descending order %d, %d, %d", n3, n1,n2); // result
        else // command if the nested if condition became false
            printf ("The three integers are assigned in descending order %d, %d, %d", n3, n2,n1); // result
    }
    return 0;
}
