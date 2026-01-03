//Given an array of n integers, 
//find the sum of even numbers and sum of odd numbers separately.

#include<stdio.h>
int main()
{
	int num[5], i, j,sume=0,sumo=0;								
	for (i=0;i<5;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&num[i]);
		
	}
		for (i=0;i<5;i++)
        {
        	if (num[i]%2==0)
        	{
        		sume=sume+num[i];
			}
			else
			{
				sumo=sumo+num[i];
			}
            
        }
	printf("Sum of Even Numbers is: %d\nSum of Odd Numbers is: %d",sume,sumo);
	return 0;
}
