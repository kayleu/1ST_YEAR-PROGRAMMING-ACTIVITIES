#include <stdio.h>

void TRIANGLE(int side1, int side2, int side3);

int main()
{
int side1, side2, side3;

printf("Please input the three sides of your triangle: ");
scanf("%d %d %d",&side1, &side2, &side3 );
TRIANGLE (side1,side2,side3);

}

void TRIANGLE(int side1, int side2, int side3)
{
    if (side1 == side2 && side2 == side3 && side3 == side1)
        printf("Your triangle is a EQUILATERAL");
    
    else if (side1 == side2 || side2 == side3 || side3 == side1)
        printf("Your triangle is an ISOSCELES.");

    else
        printf("Your Triangle is SCALENE.");
}