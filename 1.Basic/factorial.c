//Factorial Using Recursion

#include<stdio.h>
int factorial(int);
void main()
{
	int num;
	printf("Enter Positive Integer: ");
	scanf("%d",&num);
	int fact;
	fact=factorial(num);
	printf("Factorial Of %d =%d",num,fact);
}
int factorial(int num)
{
	if(num>=1)
	{
		return(num*factorial(num-1));
	}
	else 
	{
		return 1;
	}
}
