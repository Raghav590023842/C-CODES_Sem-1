//1 2 3 4 5 4 3 2 1 
//1 2 3 4   4 3 2 1
//1 2 3       3 2 1
//1 2           2 1
//1               1


#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		
		
		for(j=0;j<((2*i)-1);j++)
		{
			printf("_");
		}
		
		
		
		
		
		
		
		
		
		
		printf("\n");
	}

	return 0;
}
