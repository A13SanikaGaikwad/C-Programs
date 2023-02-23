//Program Using For Loop Power Of Number

void main()
{
	int base,expo;
	int power,i;
	power=i=1;
	
	printf("\n Base is ");
	scanf("%d",&base);
	printf("\n Exponent is ");
	scanf("%d",&expo);
	
	for(i=1;i<=expo;i++)
	{
		power=power*base;
	}
	printf("%d ^ %d = %d",base,expo,power);	
	
}
