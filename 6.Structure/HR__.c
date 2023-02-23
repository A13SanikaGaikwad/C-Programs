#include<stdio.h>
struct HR
{
	int id;
	char name[20];
	double salary;
	double commision;
};
struct HR myfun(struct HR);
void main()
{
	struct HR h;
	h=myfun(h);
	printf("\nHR: id is %d ,name is %s, salary is %lf, commision is %lf",h.id,h.name,h.salary,h.commision);
}
struct HR myfun(struct HR h)
{
	h.id=6;
	h.salary=20000;
	h.commision=50000;
	strcpy(h.name,"soni");
	return h;
}
