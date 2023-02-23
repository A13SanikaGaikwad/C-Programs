#include<stdio.h>
struct distance
{
	int feet,inches;
};
struct distance myfun(struct distance);
void main()
{
	struct distance D;
	D=myfun(D);
	printf("Feet is %d and inches is %d",D.feet,D.inches);
}
struct distance myfun(struct distance D)
{
	D.feet=10;
	D.inches=5;
	return D;
}
