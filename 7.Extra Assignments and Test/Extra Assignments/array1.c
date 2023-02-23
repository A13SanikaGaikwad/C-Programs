/*Array assignments
  find max and min element in an array*/

#include<stdio.h>
void main()
{
	int size,arr[size],i,max,min;;
	printf("Enter the size of array: ");
	scanf("%d",&size);

    printf("\nEnter Elements in array:\n");
    for(i=0;i<size;i++)
    {
    	scanf("%d",&arr[i]);
	}
	
	max=min=arr[0];
	for(i=0;i<size;i++)
    {
    	if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
	}
	
    printf("\nMaximum element in array is: %d",max);
    printf("\nMinimum element in array is: %d",min);	
}
