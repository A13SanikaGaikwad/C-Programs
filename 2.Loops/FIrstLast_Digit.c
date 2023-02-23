//Add the(first and last)digit of a given number

void main()
{
	int num,sum=0,firstdigit,lastdigit;
	
	printf("Enter number to find sum of first and last digit = ");
	scanf("%d",&num);
	
	lastdigit=num%10;
	
	while(num>=10)
	{
		num=num/10;
	}
	firstdigit=num;
	
	sum=firstdigit+lastdigit;
	
	printf("Sum of first and lastdigit = %d",sum);
}
