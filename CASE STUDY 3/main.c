#include <stdio.h>

int time_conversion(int time, int day); // FUNCTION PROTOTYPE

int main()
{

    int time, hour, minutes, day; // Declaring Variables

    do{ // DO-WHILE LOOPS IN ORDER TO REPEAT THE QUESTION IF THE USER'S INPUT IS INVALID
        printf("Please enter the Military Time in 24 hours notation format ranging from 0 to 2400: ");
        scanf("%d", &time);

        if(time < 0 || time > 2400 || (time % 100) >= 60){
            printf("Your Military Time is invalid. Please try again.\n");
        }
    }
    while (time < 0 || time > 2400 || (time % 100) >= 60); // if the user's input is less than 0 and greater than 2400 it will repeat to the question.

    hour = time_conversion(time,day); // CALLING of FUNCTION
    minutes = time % 100; // formula for minutes
    
    if(hour == 0){ // checking for the hour if it became 0.
        hour = 12;
    }
    // if else statement to provide results in 12 hour notation
    if(time >= 1200 && time <= 2359){
        printf("\nThe 12-hour notation of your time %04d is %d:%02d PM", time, hour, minutes);
    }
    else 
        printf("\nThe 12-hour notation of your time %04d is %d:%02d AM", time, hour, minutes);

     
    
}

int time_conversion(int time, int day){ // FUNCTION PROTOTYPE
    int regularhours = time /100;

    if(regularhours >=12) // if statement for regular hours if it is not greater than 12
        return regularhours - 12;

    return regularhours; // returning the value
}