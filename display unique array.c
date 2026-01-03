//WAP to display all unique elements in an array.

#include <stdio.h>

int main()
{
    int num[5], i, j, cnt=0;								
	for (i=0;i<5;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&num[i]);
		
	}

    printf("Unique elements are: ");

    for (i = 0; i < 5; i++)
    {
        cnt = 0;  

        for (j = 0; j < 5; j++)
        {
            if (num[i] == num[j])
                cnt=cnt+1;
        }

        if (cnt == 1)
            printf("%d ", num[i]);
    }

    return 0;
}


