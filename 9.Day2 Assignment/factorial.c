//write a program to find factorial of a given number-pointer to array.

void factorial(int*,int);
void main()
{
	int size;
	printf("\n Enter the Size Of Array: ");
	scanf("%d",&size);
	int num[size];
	factorial(num,size);
}
void factorial(int* ptr,int t)
{
	int fact=1,i;
	for(i=1;i<=t;i++)
	{
		fact=fact*i;
	}
	printf("\n Factorial of %d is %d",t,fact);
}

