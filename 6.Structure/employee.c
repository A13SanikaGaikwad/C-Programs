#include<stdio.h>
struct Emp
{
	int id;
	char name[20];
	double salary;
};
void storeEmployee(struct Emp*,int);
void displayArrEmployee(struct Emp*,int);
void main()
{
	struct Emp arr[3];
	storeEmployee(arr,3);
	displayArrEmployee(arr,3);
}
void storeEmployee(struct Emp*arr,int t)
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
		}
		return arr;
}
void displayArrEmployee(struct Emp*arr,int t)
{
	int i;
		for(i=0;i<t;i++)
		{
			printf("\nEmployee Id %d ,name is %s, salary is %lf",arr[i].id,arr[i].name,arr[i].salary);
		}
		return arr;
}
