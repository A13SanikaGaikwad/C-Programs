//Sum Of Digits Using Pointer,Function

void SumOfDigits(int,int*);
void main()
{
	int num,sum;
	printf("Enter Number: ");
	scanf("%d",&num);
	
	SumOfDigits(num,&sum);
	printf("sum of Digits is %d",sum);
}
void SumOfDigits(int num,int* sum)
{
	int q,r;
	*sum=0;
	
	for(*sum=0;num>0;num=q)
	{
		q=num/10;
		r=num%10;
		
		*sum=*sum+r;
		
	}
}
