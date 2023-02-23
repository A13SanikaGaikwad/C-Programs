#include<stdio.h>
struct HR
{
	int id;
	char name[20];
	double salary;
	double commision;
};
void main()
{
	int i;
	struct HR arr[3];
     	for(i=0;i<3;i++)
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
		for(i=0;i<3;i++)
		{
		    printf("\nHR: id is %d ,name is %s, salary is %lf, commision is %lf",arr[i].id,arr[i].name,arr[i].salary,arr[i].commision);
		}
}
