//WAP to sort elements of an array in ascending order.

#include <stdio.h>

int main()
{
    int num[5], i, j, temp;

    for (i=0;i<5;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&num[i]);
		
	}

    for (i=0;i<5;i++)
    {
        for (j=i+1;j<5;j++)
        {
            if (num[i]>num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("Numbers in ascending order: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}


