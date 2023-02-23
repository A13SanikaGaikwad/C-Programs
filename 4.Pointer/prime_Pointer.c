//prime number using pointer

void main()
{
	int num,i,*p1;
	printf("Enter a Number ");
	scanf("%d",&num);
	p1 = &num;
	
	for(i=2;i<*p1;i++)
	{
		if(*p1%i == 0)
		{
			printf("\n %d is not a prime Number",*p1);
			break;
		}	
	}
	
	if(i == *p1)
	{
    	printf("\n %d is a prime Number",*p1);
    }
}
