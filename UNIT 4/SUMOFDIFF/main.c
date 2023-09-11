#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,sum,difference;
    float quotient, product, sum_of_squares;
    printf("Please input your first number: "); // entering the first number of user
    scanf("%d",&a);
    printf("Please input your second number: "); // entering the second number of user
    scanf("%d",&b);
    printf("Please input your third number: ");// entering the third number of user
    scanf("%d",&c);
    sum= a+b+c; // processing the sum
    difference= a-b-c; // processing the difference
    product= a*b*c; // processing the product
    quotient= a/b/c; // processing the quotient
    sum_of_squares= (a*a)+(b*b)+(c*c); // processing the sum of squares
    printf("\nThe sum of the three numbers is %d", sum); // result in sum
    printf("\nThe difference of the three numbers is %d", difference); // result in difference
    printf("\nThe product of the three numbers is %g", product); // result in product
    printf("\nThe quotient of the three numbers is %g", quotient); // result in quotient
    printf("\nThe sum of squares of the three numbers is %g", sum_of_squares); // result in sum of squares
    return 0;
}
