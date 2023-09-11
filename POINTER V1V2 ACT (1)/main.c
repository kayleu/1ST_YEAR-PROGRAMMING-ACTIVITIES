#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3

/*Instructions
Per BreakOutRoom/Group  (BR/G1 = insertion,   BR/G2 = selection  BR/G3 = bubble)

1. Type of Sorting(insertion/selection/ bubble): ascending or descending

2. pointer acting as array

3. sorting process

            a. pointer version  (*p)

            b. version 1 arrayname itself as pointer

            c. version 2 arrayname itself as pointer

4. Use 3x3 2-dim array

5.  Only point person will submit the source code and executable program */

void PrintArray(double *p){
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("NUMBER %x : %lf\n",(p + i * COLS + j), *(p + i * COLS + j)); //access of element / value
        }
        printf("\n");
    }
}

void SortArray (double *p){
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS - 1; j++) {
            for (int k = 0; k < COLS - j - 1; k++) {
                if (*(p + i * COLS + k) > *(p + i * COLS + k + 1)){
                    double temp = *(p + i * COLS + k);
                    *(p + i * COLS + k) = *(p + i * COLS + k + 1);
                    *(p + i * COLS + k + 1) = temp;
                }
            }
        }
    }
}

int main()
{
    double numbers [ROWS][COLS] = {{5.4, 4.2, 1.3},
                                  {1.5, 7.3, 5.1},
                                  {8.3, 3.1, 2.1}};

    double *p;
    p = numbers [0];

    PrintArray(p);

    printf("\n");

    SortArray(p);
    PrintArray(p);



    return 0;
}

