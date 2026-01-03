//WAP to copy the elements of one array into another array.

#include<stdio.h>
int main()
{
	int arr[5], dupe[5], i;
	for(i=0;i<5;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&arr[i]);
		
		dupe[i]=arr[i];
		
	}
	printf("Elements in Actual Array: %d",arr[i]);
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n Elements in Duplicated Array: %d",dupe[i]);
	for(i=0;i<5;i++)
	{
		printf("%d ",dupe[i]);
	}
	return 0;
}
