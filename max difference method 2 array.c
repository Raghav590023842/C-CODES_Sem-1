// Part 2 of Find the maximum difference between any two elements in an array.

#include <stdio.h>

int main() {
    int num[5];
    int i;
    int maxDiff, a, b;

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    maxDiff = num[0] - num[1];
    if (maxDiff < 0)
	{
	maxDiff = -maxDiff;
}
    a = num[0];
    b = num[1];

    for (i = 1; i < 4; i++) {
        int d = num[i] - num[i + 1];
        if (d < 0) d = -d;  

        if (d > maxDiff) {
            maxDiff = d;
            a = num[i];
            b = num[i + 1];
        }
    }

    printf("\nPair with maximum difference: %d and %d (difference = %d)", a, b, maxDiff);

    return 0;
}

