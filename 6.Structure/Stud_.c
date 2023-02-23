#include<stdio.h>
struct Stud
{
	int roll;
	char name[20];
};
void main()
{
	int i;
	struct Stud arr[3];
     	for(i=0;i<3;i++)
     	{
			printf("Enter the rollno: ");
			scanf("%d",&arr[i].roll);
			printf("Enter the name: ");
			scanf("%s",&arr[i].name);	
		}
		for(i=0;i<3;i++)
		{
			printf("\nRoll no %d is %s",arr[i].roll,arr[i].name);
		}
}
