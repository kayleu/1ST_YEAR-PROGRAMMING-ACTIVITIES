#include <stdio.h>
#include <stdlib.h>

int main()
{
    int W_on_Earth;
    float W_on_Mars,W_on_Jupiter;
    printf("Please enter your weight in pounds: "); //entering the weight of user in pounds
    scanf("%d", &W_on_Earth);
    W_on_Mars= W_on_Earth*0.38; //Processing weight on Mars
    W_on_Jupiter= W_on_Earth*2.64; // Processing weight on Jupiter
    printf("Your weight in Mars is %.1f", W_on_Mars); //Result in Mars
    printf("\nYour weight in Jupiter is %.1f", W_on_Jupiter); //Result in Jupiter
    return 0;
}
