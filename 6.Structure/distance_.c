#include<stdio.h>
struct distance
{
	int feet;
	int inches;
};
void main()
{
	int i;
	struct distance arr[3];
     	for(i=0;i<3;i++)
     	{
		    printf("Enter the feet: ");
			scanf("%d",&arr[i].feet);
			printf("Enter the inches: ");
			scanf("%d",&arr[i].inches);
		}
		for(i=0;i<3;i++)
		{
		    printf("\n Feet is %d and inches is %d",arr[i].feet,arr[i].inches);
		}
}
