/* Without parameter with Returntype
   Factorial */

int factorial();   
void main()
{
	int facto;
    facto=factorial();
    printf("Factorial is %d",facto);
}
int factorial()
{
	int num,i,fact=1;
	printf("Enter the Num ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
