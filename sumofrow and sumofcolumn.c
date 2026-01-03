//write a program to display the sum of rows and sum of columns of a 3*3 matrix.
#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int rs=0, cs=0;

    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nSum of rows:\n");
    for(i = 0; i < 3; i++) {
    	rs=0;
        for(j = 0; j < 3; j++) {
            rs += matrix[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rs);
    }

    printf("\nSum of columns:\n");
    for(j = 0; j < 3; j++) {
        cs = 0;
        for(i = 0; i < 3; i++) {
            cs += matrix[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, cs);
    }

    return 0;
}


