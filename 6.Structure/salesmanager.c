#include<stdio.h>
struct SalesManager
{
	int id;
	char name[20];
	double salary;
	double income;
	int target;
};
void storeSalesManager(struct SalesManager*,int);
void displayArrSalesManager(struct SalesManager*,int);
void main()
{
	struct SalesManager arr[3];
	storeSalesManager(arr,3);
	displayArrSalesManager(arr,3);
}
void storeSalesManager(struct SalesManager*arr,int t)
{
	int i;
     	for(i=0;i<t;i++)
     	{
			printf("Enter the ID: ");
			scanf("%d",&arr[i].id);
			printf("Enter the name: ");
			scanf("%s",&arr[i].name);
			printf("Enter the Salary: ");
			scanf("%lf",&arr[i].salary);
			printf("Enter the income: ");
			scanf("%lf",&arr[i].income);
			printf("Enter the Target: ");
			scanf("%d",&arr[i].target);	
		}
		return arr;
}
void displayArrSalesManager(struct SalesManager*arr,int t)
{
	int i;
		for(i=0;i<t;i++)
		{
			printf("\nSalesManager Id %d ,name is %s, salary is %lf, income is %lf, target is %d",arr[i].id,arr[i].name,arr[i].salary,arr[i].income,arr[i].target);
		}
		return arr;
}
