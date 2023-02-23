#include<stdio.h>
struct SalesManager
{
	int id;
	char name[20];
	double salary;
	double income;
	int target;
};
void main()
{
	int i;
	struct SalesManager arr[3];
     	for(i=0;i<3;i++)
     	{
			printf("Enter the ID: ");
			scanf("%d",&arr[i].id);
			printf("Enter the name: ");
			scanf("%s",&arr[i].name);
			printf("Enter the salary: ");
			scanf("%lf",&arr[i].salary);
			printf("Enter the income: ");
			scanf("%lf",&arr[i].income);
			printf("Enter the Target: ");
			scanf("%d",&arr[i].target);		
		}
		for(i=0;i<3;i++)
		{
				printf("\nSalesManager Id %d ,name is %s, salary is %lf, income is %lf, target is %d",arr[i].id,arr[i].name,arr[i].salary,arr[i].income,arr[i].target);
		}
}
