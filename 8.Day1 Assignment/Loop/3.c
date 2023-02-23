// accept a 3 digit number from user and find the sum of the digits and also reverse the number

void main()
{
	int num;
	printf(" Enter 3 digit number: ");
	scanf("%d",&num);
	int q,r,q1,r1,ans,rev;
	
	q= num/10;
	r= num%10;
	q1= q/10;
	r1= q%10;
	ans=r+r1+q1;
	printf(" Sum of 3 digit number is: %d \n",ans);
	rev=r*100+r1*10+q1*1;
	printf(" reverse number is: %d",rev);
}
