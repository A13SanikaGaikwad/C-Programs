#include<stdio.h>
struct time
{
	int hour,minute,sec;
};
void storeTime(struct time*,int);
void displayArrTime(struct time*,int);
void main()
{
	struct time arr[3];
	storeTime(arr,3);
	displayArrTime(arr,3);
}
void storeTime(struct time*arr,int t)
{
	int i;
     	for(i=0;i<t;i++)
     	{
			printf("Enter the Hour: ");
			scanf("%d",&arr[i].hour);
			printf("Enter the minute: ");
			scanf("%d",&arr[i].minute);
			printf("Enter the second: ");
			scanf("%d",&arr[i].sec);
		}
		return arr;
}
void displayArrTime(struct time*arr,int t)
{
	int i;
		for(i=0;i<t;i++)
		{
			printf("\nTime: hour is %d ,minute is %d, second is %d",arr[i].hour,arr[i].minute,arr[i].sec);
		}
		return arr;
}
