//Find the maximum and minimum value in an array.

#include <stdio.h>

int main()
{
    int num[5], i, max, min;

    for (i=0;i<5;i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num[i]);
    }

    max= num[0];
    min =num[0];

    for (i=1;i<5;i++)
    {
        if(num[i] > max)
            max = num[i];
        if (num[i] < min)
            min = num[i];
    }

    printf("The Maximum Number is: %d\nThe Minimum Number is: %d", max, min);

    return 0;
}

