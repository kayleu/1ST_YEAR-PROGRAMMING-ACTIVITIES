#include <stdio.h>
#include <stdlib.h>


struct Airplane {
    int taken;
};

struct Airplane [5][4];

void printAirplaneSeats(int *allOccupied){
    *allOccupied = 1; 

    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("%d     ", i+1);
        for (int j = 0; j < 4; j++){
            if (seats [i][j].taken)
            printf("X      ");
            else{
                printf("%c       ", 'A'+ j);
                *allOccupied = 0;
            }
        }
        printf("\n");
    }
}
int main() {
    int row, col;
    char seatCol;
    int allOccupied;
    char userInput;

    // Initialize the whole array to zero
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            seats[i][j].taken = 0;
        }
    }

    printf("These are the available seats.\n");
    printAirplaneSeats(&allOccupied);

    while (!allOccupied){
        printf("\nWhat seat would you like to take?\n");
        printf("Row: ");
        while (scanf("%d, &row") !=1 || row >= 5 || row < 1) {
            printf("Invalid input. Please enter the numbers from 1 to 5. \n");
            printf("Row: ");
            while (getchar() != '\n');
        }
    }

        printf("Column: ");
        while (scanf(" %c", &seatCol) != 1 || (seatCol < 'A' || seatCol > 'D')) {
            printf("Invalid input. Please enter the letters from A to D. \n");
            printf("Column: ")
            while (getchar () != '\n');
        }

        col = seatCol - 'A';

        if (seats[row - 1][col].taken)
            printf("Seat is already occupied. Please choose another seat.\n");
        else {
            seats[row - 1][col].taken = 1;
            printf("\nCongratulations! Your booking is successfull.\n"); 
            printf("Please claim your ticket for seat %d%c at the counter.\n", row, seatCol);
            printAirplaneSeats(&allOccupied);
        }

        printf("\nMENU:\n");
        printf("[y] BOOK AGAIN\n");
        printf("[c] CANCEL\n");
        printf("[any key] EXIT\n");
        printf("Input:");
        scanf(" %c", &userInput);
        if (userInput == 'y' || userInput == 'Y')
            continue;
        else if (userInput == 'c' || userInput == 'C') {
            seats[row - 1][col].taken = 0;
            printf("\nYour seat has been cancelled\n");
            printAirplaneSeats(&allOccupied);
        }
        else
            break;
    }

    if (allOccupied)
        printf("\nAll seats are occupied.\n");

    printf("\nThank you for using our program.\n");

    return 0;
}

/*
Additional features:
-none at the moment
*/ 

