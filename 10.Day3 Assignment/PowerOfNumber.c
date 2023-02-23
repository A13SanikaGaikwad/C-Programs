//write a function to calculate power of number.it should accept the two numbers as parameter and return the result.
#include<stdio.h>

int power(int*,int*);
void main()
{
	int base,expo,temp,Ans;
	printf("\n Enter a Base Value: ");
	scanf("%d",&base);
	printf("\n Enter a Exponent Value: ");
	scanf("%d",&expo);
	temp=expo;
	Ans=power(&base,&expo);
	printf("\n %d to the power %d is: %d",base,temp,Ans);
}
int power(int *b,int *e)
{
	int result=1;
	while(*e!=0)
	{
		result=result*(*b);
		--(*e);
	}
    return result;
}
