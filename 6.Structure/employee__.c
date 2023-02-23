#include<stdio.h>
struct Emp
{
	int id;
	char name[20];
	double salary;
};
struct Emp myfun(struct Emp);
void main()
{
	struct Emp E;
	E=myfun(E);
	printf("\nEmployee Id %d ,name is %s, salary is %lf",E.id,E.name,E.salary);
}
struct Emp myfun(struct Emp E)
{
	E.id=10;
	E.salary=200000;
	strcpy(E.name,"soni");
	return E;
}
