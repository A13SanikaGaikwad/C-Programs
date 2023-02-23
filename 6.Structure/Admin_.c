#include<stdio.h>
struct Admin
{
	int id;
	char name[20];
	double salary;
	double allowance
};
void main()
{
	int i;
	struct Admin arr[3];
     	for(i=0;i<3;i++)
     	{
			printf("Enter the ID: ");
			scanf("%d",&arr[i].id);
			printf("Enter the name: ");
			scanf("%s",&arr[i].name);
			printf("Enter the salary: ");
			scanf("%lf",&arr[i].salary);
			printf("Enter the allowance: ");
			scanf("%lf",&arr[i].allowance);	
		}
		for(i=0;i<3;i++)
		{
				printf("\nAdmin Id %d ,name is %s, salary is %lf, allowance is %lf",arr[i].id,arr[i].name,arr[i].salary,arr[i].allowance);
		}
}
