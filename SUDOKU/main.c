#include <stdio.h>

void PrintBorder() {
    // prints a horizontal border to separate different sections of the output
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
}

void PrintSudoku(int sudoku[3][3]) {
    // prints the sudoku board
    printf("\nCurrent Sudoku Puzzle:\n\n");
    printf("      C1     C2     C3\n");
    printf("\t━━━━━━━━━━━━━━━━━━━━━\n");
    for (int i = 0; i < 3; i++) {
        printf(" R%d ", i+1);
        for (int j = 0; j < 3; j++) {
            printf("┃  %d  ┃", sudoku[i][j]);
        }
        printf("\n");
        printf("\t━━━━━━━━━━━━━━━━━━━━━\n");
    }
}

int isSafe(int sudoku[3][3], int row, int col, int num) {
    // checks if it's safe to place 'num' in sudoku[row][col]
    for (int i = 0; i < 3; i++) {
        if (sudoku[row][i] == num) {
            return 0; // num already exists in the same row
        }
        if (sudoku[i][col] == num) {
            return 0; // num already exists in the same column
        }
    }

    // check if num exists in the 3x3 box
        int boxRow = row - row % 3;
        int boxCol = col - col % 3;
        for (int i = boxRow; i < boxRow + 3; i++) {
            for (int j = boxCol; j < boxCol + 3; j++) {
                if (sudoku[i][j] == num) {
                    return 0; // num already exists in the same 3x3 box
                }
            }
        }
        return 1; // num can be placed in the cell
    }

int solveSudoku(int sudoku[3][3]) {
    int row, col;
    int empty_found = 0;

    // Check if the Sudoku board is already solved
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            if (sudoku[row][col] == 0) {
                empty_found = 1;
                break;
            }
        }
        if (empty_found) {
            break;
        }
    }

    if (!empty_found) {
        // If no empty cell is found, the Sudoku board is solved
        return 1;
    }

    // Try different numbers in the empty cell
    for (int num = 1; num <= 9; num++) {
        if (isSafe(sudoku, row, col, num)) {
            sudoku[row][col] = num;
            if (solveSudoku(sudoku)) {
                return 1;
            }
            // If the current number doesn't lead to a solution, backtrack
            sudoku[row][col] = 0;
        }
    }
    return 0;
}
// person 1 - kyle
int main() {
    char name [80], choice, again;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("\nWelcome, Player %s! Create your own PSEUDO-ku!\n", name);
do {
    do {
        printf("\nINSTRUCTIONS:\n1. Select your preferred row and column by choosing a value between 1 to 3.\n2. To display your desired value in the puzzle, pick any numbers from 1 to 9 only.\n3. You may only choose THREE values to display in the puzzle.\n4. Keep in mind the guide when playing. ");
        printf("\n\nAre you now ready to play? Enter [Y] for to proceed or [R] to REPEAT the INSTRUCTIONS.");
        printf("\nChoice: ");
        scanf(" %c", &choice);

        if ((choice != 'Y' && choice != 'y') && (choice != 'R' && choice != 'r')) {
            printf("\nINVALID CHOICE, Player %s! Read the instructions again.\n", name);
        }
        PrintBorder();
    } while ((choice == 'R' || choice == 'r') || (choice != 'Y' && choice != 'y'));

    int sudoku[3][3] = {{0}}; // Initialize all elements to zero
    int row, col, num;
    int used_numbers[9] = {0};
    int valid_input = 0;

    // Print the blank sudoku board
    printf("\nHere is the guide to know where to place your number!\n\n");
    printf("      C1     C2     C3\n");
    printf("\t━━━━━━━━━━━━━━━━━━━━━\n");
    for (int i = 0; i < 3; i++) {
        printf(" R%d ", i+1);
        for (int j = 0; j < 3; j++) {
            printf("┃  %d  ┃", sudoku[i][j]);
        }
        printf("\n");
        printf("\t━━━━━━━━━━━━━━━━━━━━━\n");
    }

    printf("\nHave fun!\n");
    PrintBorder();

    for (int i = 1; i <= 3; i++) {
    // Get user input for i-th number
    printf("\nEnter the [ROW] for Entry %d. Select from 1-3. ", i);
    printf("\nChoice: ");
    scanf("%d", &row);
    getchar();

    if (row < 1 || row > 3) {
        PrintBorder();
        printf("\nINVALID ROW NUMBER. Please enter a number between 1 and 3.\n");
        PrintBorder();
        i--;
        continue;
    }

    printf("\nEnter the [COLUMN] for Entry %d. Select from 1-3.", i);
    printf("\nChoice: ");
    scanf("%d", &col);
    getchar();

    if (col < 1 || col > 3) {
        PrintBorder();
        printf("\nINVALID COLUMN NUMBER. Please enter a number between 1 and 3.\n");
        i--;
        PrintBorder();
        continue;
    }
// person 2 - zeke
    // Check if the selected row and column are already occupied
    if (sudoku[row-1][col-1] != 0) {
        printf("\nRow %d, Column %d is ALREADY OCCUPIED by %d. Please choose a different cell.\n", row, col, sudoku[row-1][col-1]);
        i--;
        PrintBorder();
        continue;
    }

   // Loop until valid input is obtained
while (!valid_input) {
    printf("\nEnter the [VALUE YOU WANT TO PLACE] in the puzzle for Entry %d. Select from 1-9.", i);
    printf("\nChoice: ");
    scanf("%d", &num);
    getchar();
    PrintBorder();

    // Check if the input is valid
    if (num < 1 || num > 9) {
        printf("\nINVALID VALUE! Please enter a numeric value between 1 and 9 only.\n");
    PrintBorder();
    }
    else if (used_numbers[num-1]) {
      printf("\nNumber %d has ALREADY BEEN USED. Please choose a different number.\n", num);
      PrintBorder();
    }
    else {
        valid_input = 1;
    }
}
// person 3 - elli
    // Reset the flag for the next input
    valid_input = 0;

    used_numbers[num-1] = 1;

    sudoku[row-1][col-1] = num;

    // Print the current Sudoku board
    PrintSudoku(sudoku);
}

    solveSudoku(sudoku); //calls the function that will solve the sudoku puzzle

    // Print the final sudoku board
    PrintBorder();
    printf("\nFinal Sudoku Puzzle:\n");
    for (int i = 0; i < 3; i++) {
        printf("\t━━━━━━━━━━━━━━━\n\t");
        for (int j = 0; j < 3; j++) {
            printf("┃ %d ┃", sudoku[i][j]);
        }
        printf("\n");
    }
    printf("\t━━━━━━━━━━━━━━━\n");

    printf("\nCongratulations! You have finished the PSEUDO-ku Puzzle.\n\nDo you want to play again? Enter [Y] for Yes or press ANY KEY to exit the game \n");
    printf("Enter your choice: ");
    scanf(" %c", &again);
  } while (again == 'Y' || again == 'y');
    
  return 0;
}
// person 4

