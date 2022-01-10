// C program to find the frequency of EVEN numbers in MATRIX

#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int Matrix[ROW][COL] = {
        { 10, 8, 7 },
        { 22, 4, 6 },
        { 16, 2, 13 }
    };

    int i, j, EvenFrequency = 0;

    printf("Matrix:\n");
    for (i = 0; i < ROW; ++i) {
        for (j = 0; j < COL; ++j) {
            if (Matrix[i][j] % 2 == 0)
                EvenFrequency++;
            printf(" %d", Matrix[i][j]);
        }
        printf("\n");
    }

    printf("Frequency of EVEN numbers is: %d\n", EvenFrequency);

    return 0;
}