#include<stdio.h>
struct date
{
	int day,month,year;
};
void main()
{
	int i;
	struct date arr[3];
     	for(i=0;i<3;i++)
     	{
			printf("Enter the day: ");
			scanf("%d",&arr[i].day);	
			printf("Enter the month: ");
			scanf("%d",&arr[i].month);	
			printf("Enter the year: ");
			scanf("%d",&arr[i].year);	
		}
		for(i=0;i<3;i++)
		{
			printf("\nDate: day is %d ,month is %d, year is %d",arr[i].day,arr[i].month,arr[i].year);
		}
}
