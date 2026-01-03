//WAP to count the number of duplicate numbers in an array.

#include<stdio.h>
int main()
{
	int num[5], i, j, cnt=0;								
	for (i=0;i<5;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&num[i]);
		
	}
		for (i=0;i<5;i++)
        {
        	for(j=i+1;j<5;j++)
        	{
        		if (num[i] == num[j])
         	   {
                	cnt=cnt+1;
                	break;
           		 }
			}
            
        }
	
	
	printf("Total Number of Duplicate numers are: %d",cnt);
	
	return 0;
}


