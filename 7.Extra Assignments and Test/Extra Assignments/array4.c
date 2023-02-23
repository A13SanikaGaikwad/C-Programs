/*Array Assignments
  Find all prime no.'s in array? */
  
#include<stdio.h>
void main()
{
	int size,arr[size],i,j,flag;
	
	printf("Enter the Size of array:");
	scanf("%d",&size);
	
	printf("Enter the elements of array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("All the Prime numbers in the array are:");
	for(i=0;i<size;i++)
	{
    	flag=0;
	   for(j=2;j<arr[i];j++)
	   {
		   if(arr[i]%j == 0)
		   {
		       flag=1;
		       break;
		   }
	   }
	   if(flag==0)	
	   {
	   	printf("\n%d",arr[i]);
	   }
	}	
}

