#include <stdio.h>
#include <stdlib.h>

int main()
{

    char name[80]; // DECLARING VARIABLES
    int diameter; float priceA = 178;
    int diameter_A = 10; float priceB= 259;
    int diameter_B = 12; float priceC= 314;
    int diameter_C = 14;
    float areaA, areaB, areaC, priceAreaA, priceAreaB, priceAreaC;

    printf("Please, enter your name: "); // getting the name of the user
    scanf("%s", name); // SCANNING
    printf("\nHERE ARE THE OPTIONS OF THE DIAMETERS OF OUR PIZZA:\n"); //DISPLAYING OPTIONS OF THE MENU
    printf("10 inches Diameters, 12 inches Diameters, and 14 inches Diameters.\n");

    areaA = 3.14*(10*10) / 4; // FORMULA FOR AREA_A-AREA_C
    areaB = 3.14*(12*12) / 4;
    areaC = 3.14*(14*14) / 4;

    priceAreaA = priceA / areaA; // FORMULAS FOR PRICE AREA
    priceAreaB = priceB / areaB;
    priceAreaC = priceC / areaC;


    printf("\n\n\nThe area of the 3 pizzas in the menu are listed below:\n"); //Displaying the menu of the pizza per AREA
    printf("Your Pizza A '%d in' = %g inches \n", diameter_A, areaA);
    printf("Your Pizza B %d in = %g inches \n", diameter_B, areaB);
    printf("Your Pizza C %d in = %g inches \n", diameter_C, areaC);

    printf("\nThe price of the 3 pizza per square inch are listed below:\n"); //Displaying the menu of the pizza per square inch
    printf("Your Pizza A '%d in' = %g\n", diameter_A, priceAreaA);
    printf("Your Pizza B '%d in' = %g\n", diameter_B, priceAreaB);
    printf("Your Pizza C '%d in' = %g\n", diameter_C, priceAreaC);

    printf("\n%s, base on the lists, the least expensive pizza in terms of price per square inch of pizza is 14 inches.", name);

    printf("\nDo you wish to proceed to order? What size of pizza do you want? ");
    scanf("%d", &diameter);

    switch (diameter){ // SWITCH CASE FUNCTION AFTER PROCEEDING IN THE ORDER
        case 10:
            printf("\nThe price of your chosen pizza is Php%.2f", priceA); // will be executed if the first case '10' is chosen.
            break;
        case 12:
            printf("\nThe price of your chosen pizza is Php%.2f", priceB); // will be executed if the first case '12' is chosen.
            break;
        case 14:
            printf("\nThe price of your chosen pizza is Php%.2f", priceC); // will be executed if the third case '14' is chosen.
            break;
        default:
            printf("invalid size of pizza.");}







    return 0;
}
