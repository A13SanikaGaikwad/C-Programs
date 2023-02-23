#include<stdio.h>
struct Admin
{
	int id;
	char name[20];
	double salary;
	double allowance;
};
void storeAdmin(struct Admin*,int);
void displayArrAdmin(struct Admin*,int);
void main()
{
	struct Admin arr[3];
	storeAdmin(arr,3);
	displayArrAdmin(arr,3);
}
void storeAdmin(struct Admin*arr,int t)
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
			printf("Enter the allowance: ");
			scanf("%lf",&arr[i].allowance);
		}
		return arr;
}
void displayArrAdmin(struct Admin*arr,int t)
{
	int i;
		for(i=0;i<t;i++)
		{
			printf("\nAdmin Id %d ,name is %s, salary is %lf, allowance is %lf",arr[i].id,arr[i].name,arr[i].salary,arr[i].allowance);
		}
		return arr;
}
