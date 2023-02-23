#include<stdio.h>
struct Admin
{
	int id;
	char name[20];
	double salary;
	double allowance;
};
struct Admin myfun(struct Admin);
void main()
{
	struct Admin A;
	A=myfun(A);
	printf("\nSalesManager Id %d ,name is %s, salary is %lf, allowance is %lf",A.id,A.name,A.salary,A.allowance);
}
struct Admin myfun(struct Admin A)
{
	A.id=10;
	A.salary=200000;
	A.allowance=2500000;
	strcpy(A.name,"soni");
	return A;
}
