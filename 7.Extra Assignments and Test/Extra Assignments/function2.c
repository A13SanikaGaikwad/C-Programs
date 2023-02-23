/*function Assignments
  check whether the number is pallindrome or not*/
  
#include<stdio.h>

int pallindrome(int);
void main()
{
	int number;
	printf("Enter the Number: ");
	scanf("%d",&number);
	
	if(pallindrome(number) == 0)
	{
		printf("\n The given number is pallindrome number");
	}
	else
	{
		printf("\n The given number is not pallindrome number");
	}
}
int pallindrome(int number)
{
	int temp,remainder,rev=0;
	temp=number;
	while(number!=0)
	{
		remainder=number%10;
		rev=rev*10+remainder;
		number=number/10;
	}
	if(rev==temp)
	   return 0;
	else
	   return 1;
}
