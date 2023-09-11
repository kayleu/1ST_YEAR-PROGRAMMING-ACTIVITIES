#include <stdio.h>
#include <stdlib.h>

int main()
{
    int weight_a,weight_b,weight_c,weight_d;
    float Candy_A,Candy_B,Candy_C,Candy_D;
    printf("Please input the weight for Candy A: "); // Entering the weight for Candy A
    scanf("%d",&weight_a);
    printf("Please input the weight for Candy B: "); // Entering the weight for Candy A
    scanf("%d",&weight_b);
    printf("Please input the weight for Candy C: "); // Entering the weight for Candy A
    scanf("%d",&weight_c);
    printf("Please input the weight for Candy D: "); // Entering the weight for Candy A
    scanf("%d",&weight_d);
    Candy_A= weight_a*35.00; // PROCESSING THE WEIGHT INPUTED
    Candy_B= weight_b*45.00;
    Candy_C= weight_c*56.00;
    Candy_D= weight_d*57.50;
    printf("The candies costs what is listed here: "); // RESULTS
    printf("\nCandy A cost %.2f", Candy_A);
    printf("\nCandy B cost %.2f", Candy_B);
    printf("\nCandy C cost %.2f", Candy_C);
    printf("\nCandy D cost %.2f", Candy_D);
    return 0;
}
