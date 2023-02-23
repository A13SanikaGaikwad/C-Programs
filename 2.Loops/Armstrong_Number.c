/* check  Armstrong Number-
ArmStrong Number is a number that is equal to the sum of cubes of its digits.
for example 0,1,153,370,371,407 are the armstrong numbers.*/

void main()
{
	int n,r,sum=0,temp;
	printf("Enter the number= ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	printf("Armstrong Number");
	else
	printf("Not Armstrong Number");
}

