//WAP to accept 2 numbers from a user 
//and find the odds and evens within that range 
//and store the even numbers in an array named even 
//and odd numbers in an array named odd.


#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter First Number:");
	scanf("%d",&num1);
	
	printf("Enter Second Number:");
	scanf("%d",&num2);
	
	int i; 
	int odd[100];
	int even[100];
	
	if (num1<num2)
	{
		for(i=num1;i<=num2;i++)
		{
			if (i%2==0)
			{
				even[i]=i;
			}
			
			else
			{
				odd[i]=i;
			}
			printf("Even: %d\n Odd: %d",even[i],odd[i]);
		}
	}
	
	else if(num1>num2)
	{
		for(i=num2;i<=num1;i++)
		{
			if (i%2==0)
			{
				even[i]=i;
			}
			
			else
			{
				odd[i]=i;
			}
			printf("Even: %d\n Odd: %d",even[i],odd[i]);
		}
	}
	
	else if(num1==num2)
	{
		printf("Both Numbers are Equal");
	}
	
	

	return 0;
}
