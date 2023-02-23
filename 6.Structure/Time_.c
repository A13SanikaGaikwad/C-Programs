#include<stdio.h>
struct time
{
	int hour,minute,second;
};
void main()
{
	int i;
	struct time arr[3];
     	for(i=0;i<3;i++)
     	{
		    printf("Enter the Hour: ");
			scanf("%d",&arr[i].hour);
			printf("Enter the minute: ");
			scanf("%d",&arr[i].minute);
			printf("Enter the second: ");
			scanf("%d",&arr[i].second);
		}
		for(i=0;i<3;i++)
		{
			printf("\nTime: Hour is %d ,minute is %d,Second is %d",arr[i].hour,arr[i].minute,arr[i].second);
		}
}
