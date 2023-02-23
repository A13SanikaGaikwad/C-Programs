/* Programs using for loop
Sum of Factorial(using scanf)*/

void main()
{
	int num,i,fact=1,sum=0;
	printf("Enter the Num ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		sum=sum+fact;
	}
		
	printf("\n Factorial of %d is %d",num,fact);
	printf("\n Sum of Factorial is %d",sum);
	
}
