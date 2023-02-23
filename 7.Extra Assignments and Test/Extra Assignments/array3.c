/*Array Assignments
  Find all odd and even no.'s in array? */
  
#include<stdio.h>
void main()
{
	int size,arr[size],i;
	
	printf("Enter the Size of array:");
	scanf("%d",&size);
	
	printf("Enter the elements of array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Odd elements in array are:");
	for(i=0;i<size;i++)
	{
		if(arr[i]%2 != 0)
		printf("\n%d",arr[i]);
	}

    printf("\nEven elements in array are:");
	for(i=0;i<size;i++)
	{
		if(arr[i]%2 == 0)
		printf("\n%d",arr[i]);
	}
}

