/* Without Parameter without returntype
sum of digits*/

void SumOfDigits();
void main()
{
	SumOfDigits();
}
void SumOfDigits()
{
	int num;
	printf("Enter Number ");
	scanf("%d",&num);
	
	int q,r,sum=0;
	
	for(sum=0;num>0;num=q)
	{
		q=num/10;
		r=num%10;
		
		sum=sum+r;
		
	}
	printf("sum of Digits is %d",sum);
}
