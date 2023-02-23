/* Factorial
With parameter with Returntype*/

int factorial(int);   
void main()
{
	int num,ans;
    printf("Enter the Num ");
    scanf("%d",&num);
    ans=factorial(num);
    printf("Factorial of %d is %d",num,ans);
}
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
