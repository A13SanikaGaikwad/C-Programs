//3.accept a 3 digit number from user and find the sum of the digits and also reverse the number-Pointer with Function

void sum_(int*);
void reverse(int*);
void main()
{
	int number;
	printf(" Enter 3 digit number: ");
	scanf("%d",&number);
	sum_(&number);
	reverse(&number);
}
void sum_(int *num)
{
	int q,r,q1,r1,sum;
	q= *num/10;
	r= *num%10;
	q1= q/10;
	r1= q%10;
	sum=r+r1+q1;
	printf(" Sum of 3 digit number is: %d \n",sum);
}
void reverse(int *num)
{
	int q,r,q1,r1,rev;
	q= *num/10;
	r= *num%10;
	q1= q/10;
	r1= q%10;
	rev=r*100+r1*10+q1*1;
	printf(" reverse number is: %d",rev);
}
