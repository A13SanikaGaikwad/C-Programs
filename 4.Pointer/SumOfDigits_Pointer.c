//sum of digits using pointer

void main()
{
	int num;
	printf("Enter Number ");
	scanf("%d",&num);
	
	int q,r,sum=0,*p1,*p2;
	p1=&num;
	p2=&sum;
	
	for(*p2=0;*p1>0;*p1=q)
	{
		q=num/10;
		r=num%10;
		
		*p2=*p2+r;
		
	}
	printf("sum of Digits is %d",*p2);
}
