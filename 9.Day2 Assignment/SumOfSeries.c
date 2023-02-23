//Sum Of Series- Pointer to Function

void SumSeriesn();
void SumOfFact();
void SumOfRaise();
void main()
{
   int ch;
   printf("\n Enter Your Choice \n 1.1+2+3+...+n \n 2.1!+2!+3!+....+n! \n 3.1^1+2^2+....+n^n \n");
   scanf("%d",&ch);
   int number;
   printf("\n Enter the value of n: ");
   scanf("%d",&number);
	
   if(ch==1)
   SumSeriesn(&number);
   else if(ch==2)
   SumOfFact(&number);
   else
   SumOfRaise(&number);
}
void SumSeriesn(int *n)
{
	int i,sum=0;
	for(i=1;i<=*n;i++)
	{
		sum=sum+i;
		if(i!=*n)
		{
			printf("%d + ",i);
		}
		else
		{
			printf("%d = %d",i,sum);
		}
	}
}
void SumOfFact(int *n)
{
	int i,j,sum=0,fact;
	for(i=1;i<=*n;i++)
	{
		fact=1;
		if(i!=*n)
		printf("%d!+ ",i);
		else
		printf("%d!= ",i);
		
		for(j=1;j<=i;j++)
		fact=fact*j;
		sum=sum+fact;
	}
	printf("%d",sum);
}
void SumOfRaise(int *n)
{
	int sum=0;
	int i;
	for(i=1;i<=*n;i++)
	{
		sum=sum+(i*i);
		if(i!=*n)
		{
			printf("%d^%d + ",i,i);
		}
		else
		{
			printf("%d^%d = ",i,i);
		}
	}	
	printf("%d",sum);
}
