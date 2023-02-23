//Prime no. Using Recursion

#include<stdio.h>
int Primeno(int,int);
void main()
{
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	
	if(Primeno(2,num)==0)
	{
		printf("%d is Prime Number",num);
	}
	else
	{
		printf("%d is Not Prime Number",num);
	}
}
int Primeno(int i,int num)
{
	if(num==i)
	{
	    return 0;
	}
    else if(num%i==0)
    {
    	return 1;
	}
	else
	{
		return(Primeno(i+1,num));
	}
}
