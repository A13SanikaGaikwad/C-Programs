#include<stdio.h>
typedef struct distance
{
	int feet,inches;
}distance;
void myfun(distance*);
void main()
{
	distance d1;
	myfun(&d1);
	printf("feet is %d and inches is %d",d1.feet,d1.inches);
}
void myfun(distance* ptr)
{
	ptr->feet=10;
	ptr->inches=20;
}
