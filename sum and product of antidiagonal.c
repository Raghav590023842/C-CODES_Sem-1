//WAP to find the sum and product of the elements of antidiagonal.

#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter number of rows: ");
	scanf("%d",&x);
	
	printf("Enter number of columns: ");
	scanf("%d",&y);
	
	int arr1[x][y],i,j,sum=0,prod=1;
	printf("Input elements in the matrix: \n");
	for(i=0;i<x;i++)
	{
		for (j=0;j<y;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			if (i!=j)
			{
				sum = sum + arr1[i][j];
				prod = prod * arr1[i][j];
			}
		}
	}
	printf("Sum of Antidiagonal Elements is: %d \nProduct of Antidiagonal Elements is %d",sum,prod);
	
	return 0;
}
