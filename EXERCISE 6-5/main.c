#include <stdio.h>
// scans in the race time in MINUTES & SECONDS
// computes and displays the speed in FEET PER SECONDS & METERS PER SECONDS


float instruction(); // FUNCTION PROTOTYPE

int main() 
{

    float result = instruction(); //calling the function
    printf ("\n The converted value of your race time in feet per seconds is: %.2f feet per seconds", 5280 / result); // displaying result
    printf ("\n The converted value of your race time in meters per seconds is: %.2f meters per seconds", 1609.344 / result); // displaying result
}

// 5280 per mile, 3282 feet one kilometer (1609.344)
// 5280 feet/seconds = answer 

float instruction() // FUNCTION DEFINITION
{
    // declaring variables
    float result; 
    int minutes, seconds;

    // Displaying instruction, and processing formula.
    printf("Hello! Welcome to Penn Relays Mile Race Conversion!");
    printf("\nPlease input your finishing race time in minutes and seconds [10 05]:  ");
    scanf("%d %d", &minutes, &seconds);
    result = minutes * 60 + seconds;
    
    return result;
}