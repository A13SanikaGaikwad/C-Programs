/*Array Assignments
  Accept the elements of array from user and sum of all the elements*/
  
#include<stdio.h>
void main()
{
	int size,arr[size],i,sum=0;
	
	printf("Enter the Size of arrray:");
	scanf("%d",&size);
	
	printf("Enter the elements of array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of all the elements are: %d",sum);
}
