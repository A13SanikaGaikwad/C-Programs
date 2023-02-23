#include<stdio.h>
struct Stud
{
	int roll;
	char name[20];
};
struct Stud myfun(struct Stud);
void main()
{
	struct Stud S;
	S=myfun(S);
	printf("\nRoll no %d is %s",S.roll,S.name);
}
struct Stud myfun(struct Stud S)
{
	S.roll=10;
	strcpy(S.name,"soni");
	return S;
}
