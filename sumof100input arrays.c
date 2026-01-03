// WAP to accept 100 different number from user and add those numbers.

#include<stdio.h>
int main()
{
	int num[100], i, sum=0;
	for (i=0;i<100;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&num[i]);
		sum = sum + num[i];
	}
	printf("Sum is: %d",sum);
	return 0;
}
