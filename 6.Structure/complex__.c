#include<stdio.h>
struct complex
{
	int real,img;
};
struct complex myfun(struct complex);
void main()
{
	struct complex C;
	C=myfun(C);
	printf("%d + %di",C.real,C.img);
}
struct complex myfun(struct complex C)
{
	C.real=10;
	C.img=5;
	return C;
}
