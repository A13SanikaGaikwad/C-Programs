//With parameter without returntype- Prime NO

void primeno(int);
void main()
{
	int num;
	printf("Enter a Number ");
	scanf("%d",&num);
	primeno(num);
}
void primeno(int n)
{
    int i;
	
	for(i=2;i<n;i++)
	{
		if(n%i == 0)
		{
			printf("\n %d is not a prime Number",n);
			break;
		}	
	}
	
	if(i == n)
	{
    	printf("\n %d is a prime Number",n);
    }
}
