#include<stdio.h>
struct distance
{
	int feet,inches;
};
void storedistance(struct distance*,int);
void displaydistance(struct distance*,int);
void main()
{
	struct distance arr[3];
	storedistance(arr,3);
	displayArrdistance(arr,3);
}
void storedistance(struct distance*arr,int t)
{
	int i;
     	for(i=0;i<t;i++)
     	{
			printf("Enter the feet: ");
			scanf("%d",&arr[i].feet);
			printf("Enter the inches: ");
			scanf("%d",&arr[i].inches);
		}
		return arr;
}
void displayArrdistance(struct distance*arr,int t)
{
	int i;
		for(i=0;i<t;i++)
		{
			printf("\nDistance: feet is %d ,inches is %d",arr[i].feet,arr[i].inches);
		}
		return arr;
}
