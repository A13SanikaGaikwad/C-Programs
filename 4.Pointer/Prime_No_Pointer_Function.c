//Prime No Using Pointer,Function

void primeno(int*);
void main()
{
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);
	int*n = &num;
	primeno(n);
}
void primeno(int* n)
{
    int i;
	
	for(i=2;i<*n;i++)
	{
		if(*n%i == 0)
		{
			printf("\n %d is not a prime Number",*n);
			break;
		}	
	}
	
	if(i == *n)
	{
    	printf("\n %d is a prime Number",*n);
    }
}
