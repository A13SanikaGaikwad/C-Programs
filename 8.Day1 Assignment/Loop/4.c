//check if the given number is even or odd
void main()
{
	int  num;
	int r;
	printf("Enter No ");
	scanf("%d",&num);
	r=num%2;
	if(r!=0)
	{
		printf("Odd");
	}
	else
	{
		printf("Even");
	}
}
