//Without parameter without returntype- Prime NO

void primeno();
void main()
{
	primeno();
}
void primeno()
{
    int num,i;
	printf("Enter a Number ");
	scanf("%d",&num);
	
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
