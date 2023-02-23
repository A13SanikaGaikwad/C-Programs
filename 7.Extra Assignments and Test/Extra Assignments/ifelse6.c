/* If-else Assignment
   Take Binary input from user and perform following operations And,Or,Not,Xor? */
   
#include<stdio.h>
void AND_operator(int[],int[],int);
void OR_operator(int[],int[],int);
void NOT_operator(int[],int[],int);
void XOR_operator(int[],int[],int);
void main()
{
	int b;
	printf("\n How many bit you want to entered:");
	scanf("%d",&b);
	int B1[b],B2[b],i;
	printf("\nEnter the %d bit Binary input- 1 (1s and 0s):\n",b);
	for(i=0;i<b;i++)
	{
		scanf("%d",&B1[i]);
	}
	printf("\nEnter the  %d bit Binary input- 2 (1s and 0s):\n",b);
	for(i=0;i<b;i++)
	{
		scanf("%d",&B2[i]);
	}
	AND_operator(B1,B2,b);
	OR_operator(B1,B2,b);
	NOT_operator(B1,B2,b);
	XOR_operator(B1,B2,b);
}
void AND_operator(int n1[],int n2[],int b)
{
	int i;
	printf("\nAND Output: ");
	for(i=0;i<b;i++)
	{
		if(n1[i]==1 && n2[i]==1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
void OR_operator(int n1[],int n2[],int b)
{
	int i;
	printf("\nOR Output: ");
	for(i=0;i<b;i++)
	{
		if(n1[i]==0 && n2[i]==0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
	}
}
void NOT_operator(int n1[],int n2[],int b)
{
	int i;
	printf("\nNOT Output of input1: ");
	for(i=0;i<b;i++)
	{
		if(n1[i]==0)
		{
			printf("1");
		}
	    if(n1[i]==1)
		{
			printf("0");
		}
	}
	printf("\nNOT Output of input2: ");
	for(i=0;i<b;i++)
	{
		if(n2[i]==0)
		{
			printf("1");
		}
	    if(n2[i]==1)
		{
			printf("0");
		}
	}
}
void XOR_operator(int n1[],int n2[],int b)
{
	int i;
	printf("\nXOR Output: ");
	for(i=0;i<b;i++)
	{
		if(n1[i]==1 && n2[i]==1)
		{
			printf("0");
		}
		else if(n1[i]==0 && n2[i]==0)
		{
			printf("0");
		}
		else 
		{
			printf("1");
		}
		
	}
}

	
