//Factorial Using Pointer,Function

void FindFactorial(int,int*);
void main()
{
	int i,num,fact;
	printf("Enter the Num: ");
	scanf("%d",&num);
	
	FindFactorial(num,&fact);
	printf("\nFactorial of %d is: %d",num,fact);
	
}
void FindFactorial(int num,int * fact)
{
	int i;
	*fact=1;
	
	for(i=1;i<=num;i++)
	{
		*fact=*fact*i;
	}
}
