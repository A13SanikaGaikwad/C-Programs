#include<stdio.h>
struct complex
{
	int real;
	int img;
};
void main()
{
	struct complex c1;
	c1.real=10;
	c1.img=2;
	printf("%d + %di",c1.real,c1.img);
}
