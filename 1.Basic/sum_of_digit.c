//Sum Of Digit Using Recursion

#include<stdio.h>
int sum_Of_Digit(int);
void main()
{
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	int	result;
    result = sum_Of_Digit(num);
	printf("\nsum=%d",result);
}
int sum_Of_Digit(int num)
{
	if(num!=0)
	{
	    return(num%10+ sum_Of_Digit(num/10));
	}
    else
    {
    	return 0;
	}
}
