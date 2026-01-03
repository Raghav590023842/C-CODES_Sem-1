//Find the pair of elements in an array whose sum is closest to zero.

#include <stdio.h>

int main() {
    int num[5];
    int i;
    int minSum, a, b;

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    minSum = num[0] + num[1];
    a = num[0];
    b = num[1];

    for (i = 1; i < 4; i++) {
        int s = num[i] + num[i + 1];

        if (s * s < minSum * minSum) {  
            minSum = s;
            a = num[i];
            b = num[i + 1];
        }
    }

    printf("\nPair closest to zero: %d and %d (sum = %d)", a, b, minSum);

    return 0;
}

