#include<stdio.h>
struct HR
{
	int id;
	char name[20];
	double salary;
	double commision;
};
void storeHR(struct HR*,int);
void displayArrHR(struct HR*,int);
void main()
{
	struct HR arr[3];
	storeHR(arr,3);
	displayArrHR(arr,3);
}
void storeHR(struct HR*arr,int t)
{
	int i;
     	for(i=0;i<t;i++)
     	{
			printf("Enter the id: ");
			scanf("%d",&arr[i].id);
			printf("Enter the name: ");
			scanf("%s",&arr[i].name);
			printf("Enter the salary: ");
			scanf("%lf",&arr[i].salary);
			printf("Enter the commision: ");
			scanf("%lf",&arr[i].commision);
		}
		return arr;
}
void displayArrHR(struct HR*arr,int t)
{
	int i;
		for(i=0;i<t;i++)
		{
			printf("\nHR: id is %d ,name is %s, salary is %lf, commision is %lf",arr[i].id,arr[i].name,arr[i].salary,arr[i].commision);
		}
		return arr;
}
