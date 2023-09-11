#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ROWS 5
#define COLS 4

void GetSeatNumber (struct SmallAirplane *airplane, int *AssignedSeats){
	int SeatNumber, row, column;
	char SeatLetter;
	
	do{
		printf("Enter seat numer (1-5):\n\tRESPONSE: ");
		while(scanf("%d", &SeatNumber) != 1 || SeatNumber <= 0 || SeatNumber > ROWS) {
			printf("Invalid Input. Please enter a valid seat number (1-5):\n\tRESPONSE: ");
		while(getchar() != '\n');
		}
		
		printf("Enter seat letter (A-D):\n\tRESPONSE: ");
		while(scanf(" %c", &SeatLetter) != 1 || !isalpha(SeatLetter) || SeatNumber < 'A' || SeatNumber > 'D') {
			printf("Invalid Input. Please enter a valid capital seat letter (A-D):\n\tRESPONSE: ");
		while(getchar () != '\n');
		}		
		
		row = SeatNumber - 1;
		column = SeatLetter - 'A';
		
		if(airplane->seats[row][column].status = 'X')
			printf("Sorry, the seat is already occupied. Please choose another seat.\n")
	} while (airplane->seats[row][column].status = 'X');
	
	airplane->seats[row][column].status = 'X';
		printf("\n%d%c | Seat assigned successfully!\n", SeatNumber, SeatLetter);
	
	(*AssignedSeats)++
}

int main(){
	struct SmallAirplane airplane;
	
	int TotalSeats = ROWS * COLS;
	int AssignedSeats = 0;
	int NumSeatsToTake;
	char UserInput[20];
	
	AssigningElements(&airplane);
	
	printf("Experience the joy in every journey with Philippine Airline. BOOK NOW\n");
	printf("Welcome to the Assignment Seat Program");
	
	PrintingAirplaneSeats(&airplane);
	DisplayAirplaneSeats(&airplane);
	
	while(AssignedSeats != TotalSeats){
		GetSeatNumber(&airplane, &AssignedSeats);
		PrintingAirplaneSeats(&airplane);
		if (AssignedSeats != TotalSeats)
			DisplayAirplaneSeats(&airplane);
		
		do {
			printf("Enter 'Exit' to quit or 'Continue' to choose another seat:");
			scanf("%c", UserInput);
			
			if(strcmp(UserInput, "Exit") == 0) {
				printf("Are you sure you want to quit. Enter 'Yes' and 'No' if not:");
					scanf("%s", UserInput);	
				
				if(strcmp(UserInput, "Yes") == 0) {
					break;
				} else if (strcmp(UserInput, "No") != 0) {
					printf("Invalid Input. Please try again.");
				} else if (strcmp(UserInput, "Continue") != 0) {
					printf("Invalid Input. Please try again.");
			}
				
		}

	} while (strcmp(UserInput, "Exit") != 0 && (strcmp(UserInput, "Continue") != 0);
	
	if (strcmp(UserInput, "Continue") != 0 || AssignedSeats != TotalSeats){
		printf("Congratulation! Your ticket has been assigned.\ Please print your boarding pass and proceed to the departure gate. Thank you!");
		break;		
	}
	
	return 0;
}
