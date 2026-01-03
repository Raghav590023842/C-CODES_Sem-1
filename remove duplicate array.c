//Remove duplicates from an array.

#include <stdio.h>

int main() {
    int num[5], unique[5];
    int i, j, k = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < k; j++) {
            if (num[i] == unique[j])
                break;  
        }

        if (j == k) 
		{     
            unique[k] = num[i];
            k++;
        }
    }

    printf("\nArray after removing duplicates:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}

