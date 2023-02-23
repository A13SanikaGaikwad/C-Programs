// accept a 3 digit number from user and find the sum of the digits and also reverse the number-with parameter with returntype

int sum_(int);
int reverse(int);
void main()
{
	int number;
	printf(" Enter 3 digit number: ");
	scanf("%d",&number);
	
	int s;
	s=sum_(number);
	printf(" Sum of 3 digit number is: %d \n",s);
	int r;
	r=reverse(number);
	printf(" reverse number is: %d",r);
}
int sum_(int num)
{
	int q,r,q1,r1,sum;
	q= num/10;
	r= num%10;
	q1= q/10;
	r1= q%10;
	sum=r+r1+q1;
	return sum;
}
int reverse(int num)
{
	int q,r,q1,r1,rev;
	q= num/10;
	r= num%10;
	q1= q/10;
	r1= q%10;
	rev=r*100+r1*10+q1*1;
	return rev;
}
