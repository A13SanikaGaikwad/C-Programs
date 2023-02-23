//without parameter with returntype- Prime NO

int primeno();
void main()
{
	int num,i;
	num=primeno();
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
int primeno()
{
	int num;
	printf("Enter a Number ");
	scanf("%d",&num);
	return num;	
}
