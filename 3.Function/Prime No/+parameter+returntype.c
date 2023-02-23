//With parameter with returntype- Prime NO

int primeno(int);
void main()
{
	int num,i;
	printf("Enter a Number ");
	scanf("%d",&num);
	primeno(num);
	for(i=2;i<num;i++)
	{
		if(num%i == 0)
		{
			printf("\n %d is not a prime Number",num);
			break;
		}	
	}
	
	if(i == num)
	{
    	printf("\n %d is a prime Number",num);
    }
}
int primeno(int n)
{
   return n; 
}
