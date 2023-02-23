#include<stdio.h>
struct Emp
{
	int id;
	char name[20];
	double salary;
};
void main()
{
	int i;
	struct Emp arr[3];
     	for(i=0;i<3;i++)
     	{
			printf("Enter the ID: ");
			scanf("%d",&arr[i].id);
			printf("Enter the name: ");
			scanf("%s",&arr[i].name);
			printf("Enter the salary: ");
			scanf("%lf",&arr[i].salary);	
		}
		for(i=0;i<3;i++)
		{
			printf("\nEmployee Id %d ,name is %s, salary is %lf",arr[i].id,arr[i].name,arr[i].salary);
		}
}
