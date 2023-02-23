//Accept a number from user(any digit),and do the following.

void SumOfDigit(int);
void ReverseTheNumber(int);
void main()
{
	int number,ch;
	printf("Enter the Number: ");
	scanf("%d",&number);
	printf("\n Enter Your Choice: 1.Sum Of Digits 2.Reverse The Order : ");
	scanf("%d",&ch);
	
	if(ch==1)
	SumOfDigit(number);
	else if(ch==2)
	ReverseTheNumber(number);
	else
	printf("Your Choice are Invalid");
}
void SumOfDigit(int num)
{
	int q,r,sum=0;
	while(num>0)
	{
		q=num/10;
		r=num%10;
		
		sum=sum+r;
		num=q;
	}
	printf("sum of Digits is %d",sum);
}
void ReverseTheNumber(int num)
{
    int rev=0,r;
    while(num!=0)
    {
    	r=num%10;
    	rev=rev*10+r;
    	num/=10;
	}
	printf("Reverse Number is %d",rev);
}

