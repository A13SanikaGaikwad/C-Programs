#include<stdio.h>
struct Stud
{
	int roll;
	char name[20];
};
void storeStudent(struct Stud*,int);
void displayArrStud(struct Stud*,int);
void main()
{
	struct Stud arr[3];
	storeStudent(arr,3);
	displayArrStud(arr,3);
}
void storeStudent(struct Stud*arr,int t)
{
	int i;
     	for(i=0;i<t;i++)
     	{
			printf("Enter the rollno: ");
			scanf("%d",&arr[i].roll);
			printf("Enter the name: ");
			scanf("%s",&arr[i].name);	
		}
		return arr;
}
void displayArrStud(struct Stud*arr,int t)
{
	int i;
		for(i=0;i<t;i++)
		{
			printf("\nRoll no %d is %s",arr[i].roll,arr[i].name);
		}
		return arr;
}
