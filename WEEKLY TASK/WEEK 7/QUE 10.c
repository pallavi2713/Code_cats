// C program to print the upper triangular matrix

#include <stdio.h>

int main()
{
    int Matrix[3][3] = {
        { 6, 2, 7 },
        { 15, 9, 6 },
        { 3, 9, 3 }
    };

    int i, j;

    printf("Matrix:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nUpper triangular matrix is: \n");
    for (i = 0; i < 3; i++) {

        for (j = 0; j < 3; j++) {
            if (j >= i)
                printf("%d ", Matrix[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}