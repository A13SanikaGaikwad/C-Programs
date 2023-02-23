#include<stdio.h>
struct SalesManager
{
	int id;
	char name[20];
	double salary;
	double income;
	int target;
};
struct SalesManager myfun(struct SalesManager);
void main()
{
	struct SalesManager S;
	S=myfun(S);
	printf("\nSalesManager Id %d ,name is %s, salary is %lf, income is %lf, target is %d",S.id,S.name,S.salary,S.income,S.target);
}
struct SalesManager myfun(struct SalesManager S)
{
	S.id=10;
	S.salary=200000;
	S.income=2500000;
	S.target=3000000;
	strcpy(S.name,"soni");
	return S;
}
