#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,w,h,v;
    printf("Please enter length: "); // entering the length of the user
    scanf("%d", &l);
    printf("Please enter width: "); // entering the width of the user
    scanf("%d", &w);
    printf("Please enter height: "); // entering the height of the user
    scanf("%d", &h);
    v = l*w*h; // processing the volume of a box
    printf("The volume of a box is %d",v); // result
    return 0;
}
