#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number_of_days; //DECLARING VARIABLES
  float fine;
  char type_of_cd;
  printf("Please input the number of days late to the given due date: "); //Inputing the number of days late of the USER
  scanf("%d", &number_of_days); // SCANNING
  if (number_of_days <= 2){ // First Condition
    printf("You are %d day/s late.", number_of_days);
    printf("\nYou are fined of 10.00."); // Fine of the user if the first condition is true.
    }
   else if (number_of_days <= 4){ // Second Condition
    printf("You are %d day/s late.", number_of_days);
    printf("\nYou are fined of 15.00."); // Fine of the user if the second condition is true.
  }
   else if (number_of_days <= 5){ // Third Condition
    printf("You are %d day/s late.", number_of_days);
    printf("\nYou are fined of 20.00.");  // Fine of the user if the third condition is true.
  }
   else if (number_of_days >= 7){ // Last Condition
        printf("Please indicate the specific type of you rent CD-'CD', VHS-'VHS': "); // ASKING IF WHAT TYPE DO USER HAS
        scanf(" %c", &type_of_cd); // SCANNING
        if (type_of_cd == 'C') { // First Condition if CD is typed
            fine = 50.00;
            printf("You are %d day/s late.", number_of_days);
            printf("\nThe fine is %.2f.\n", fine); // Fine of the user if the first (CD) condition is true.
        } else if (type_of_cd == 'V') { // Second Condition if VHS is typed
            fine = 35.00;
            printf("You are %d day/s late", number_of_days);
            printf("\nThe fine is %.2f.\n", fine); // Fine of the user if the second (VHS) condition is true.
        } else {
            printf("It is not included on our rental list.\n"); // IF THE USER DOES NOT TYPE ACCURATELY THE GIVEN CHOICES.

  }
    return 0;
}
}
