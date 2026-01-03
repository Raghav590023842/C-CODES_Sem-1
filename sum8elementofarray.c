//WAP to accept 8 numbers from user and find the sum of all elements of array.

#include<stdio.h>
int main()
{
	int num[8], i, sum=0;
	for (i=0;i<8;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&num[i]);
		sum = sum + num[i];
	}
	printf("Sum is: %d",sum);
	return 0;
}
