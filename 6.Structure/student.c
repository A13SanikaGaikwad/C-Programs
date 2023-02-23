#include<stdio.h>
typedef struct student
{
	int roll;
	char name[20];
}student;
void myfun(student*);
void main()
{
	student s1;
	myfun(&s1);
	printf("%d ",s1.roll);
	printf("%s",s1.name);
}
void myfun(student* ptr)
{
	ptr->roll=10;
	strcpy(ptr->name,"sachin");
}
