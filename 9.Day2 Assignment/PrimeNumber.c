//check if numbers is a prime number or not-Pointer to Function.

int prime(int*);
void main()
{
	int n,p;
	printf("Enter a Positive Integer : ");
	scanf("%d",&n);
	p=prime(&n);
	if(p == 0)
	   printf("%d is a Prime number.",n);
	else
	   printf("%d is not a Prime number.",n);
}
int prime(int *number)
{
	int i,flag=0;
	if(*number==0 || *number==1)
	flag=1;
	for(i=2;i<=(*number/2);++i)
	{
		if(*number%i == 0)
		{
		    flag=1;
		    break;
		}
	}
    return flag;
}
