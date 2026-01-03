//wap to accept 10 numbers from a user and display 3 numbers whose sum is maximum

#include <stdio.h>

int main()
{
    int num[10], i, j, k;
    int maxSum = 0; 
    int a=0, b=0, c=0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            for (k = j + 1; k < 10; k++)
            {
                int sum = num[i] + num[j] + num[k];
                if (sum > maxSum)
                {
                    maxSum = sum;
                    a = num[i];
                    b = num[j];
                    c = num[k];
                }
            }
        }
    }

    printf("\nThe 3 numbers with maximum sum are: %d, %d, %d\n", a, b, c);
    printf("Their sum is: %d\n", maxSum);

    return 0;
}

