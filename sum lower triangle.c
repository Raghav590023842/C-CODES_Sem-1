//WAP to find the sum of a lower triangle of a 3*3 matrix.


#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, sum = 0;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j <= i; j++) {  
            sum += matrix[i][j];
        }
    }

    printf("Sum of lower triangle elements = %d\n", sum);

    return 0;
}

