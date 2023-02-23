#include<stdio.h>
struct date
{
	int day,month,year;
};
struct date myfun(struct date);
void main()
{
	struct date D;
	D=myfun(D);
	printf("\nDate: day is %d ,month is %d, year is %d",D.day,D.month,D.year);
}
struct date myfun(struct date D)
{
	D.day=13;
	D.month=9;
	D.year=2000;
	return D;
}
