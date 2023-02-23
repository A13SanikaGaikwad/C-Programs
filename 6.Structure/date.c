#include<stdio.h>
struct date
{
	int day,month,year;
};
void storeDate(struct date*,int);
void displayArrDate(struct date*,int);
void main()
{
	struct date arr[3];
	storeDate(arr,3);
	displayArrDate(arr,3);
}
void storeDate(struct date*arr,int t)
{
	int i;
     	for(i=0;i<t;i++)
     	{
			printf("Enter the day: ");
			scanf("%d",&arr[i].day);
			printf("Enter the month: ");
			scanf("%d",&arr[i].month);
			printf("Enter the year: ");
			scanf("%d",&arr[i].year);
		}
		return arr;
}
void displayArrDate(struct date*arr,int t)
{
	int i;
		for(i=0;i<t;i++)
		{
			printf("\nDate: day is %d ,month is %d, year is %d",arr[i].day,arr[i].month,arr[i].year);
		}
		return arr;
}
