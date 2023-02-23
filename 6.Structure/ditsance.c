#include<stdio.h>
struct distance
{
	int feet;
	int inches;
};
void main()
{
	struct distance d;
	d.feet=10;
	d.inches=2;
	printf("Feet is %d Inches is %d",d.feet,d.inches);
}
