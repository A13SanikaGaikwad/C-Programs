/* Without parameter without Returntype
   Factorial */

void factorial();   
void main()
{
 factorial();	
}
void factorial()
{
	int num,i,fact=1;
	printf("Enter the Num ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
		
	printf("\n Factorial of %d is %d",num,fact);
}
