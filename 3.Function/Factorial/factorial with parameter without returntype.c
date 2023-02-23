/* With parameter without Returntype
   Factorial */

void factorial();   
void main()
{
	int num;
    printf("Enter the Num ");
    scanf("%d",&num);
    factorial(num);
}
void factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n Factorial of %d is %d",n,fact);
}
