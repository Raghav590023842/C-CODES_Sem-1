//WAP to accept few numbers from a user
//and store these numbers in an array
//and Display the values of array in both forward and reverse direction.


#include<stdio.h>
int main()
{
	int i, num[5];
	for(i=0;i<5;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&num[i]);
		
	}
	printf("Numbers in Forward Direction: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",num[i]);
	}
	printf("Numbers in Reverse Direction: ");
	for(i=4;i>=0;i--)
	{
		printf("%d ",num[i]);
	}
	return 0;
}
