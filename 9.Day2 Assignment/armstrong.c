/* check  Armstrong Number using- Pointer to function
ArmStrong Number is a number that is equal to the sum of cubes of its digits.
for example 0,1,153,370,371,407 are the armstrong numbers.*/

void armstrong(int*);
void main()
{
	int number;
	printf("Enter the number= ");
	scanf("%d",&number);
	armstrong(&number);
}
void armstrong(int *no)
{
	int sum=0,rem,*p,*pr,temp;
	temp=*no;
	p=&(*no);
	pr=&sum;
	while(*p>0)
	{
		rem=(*p)%10;
		*pr=(*pr)+(rem*rem*rem);
		*p=(*p)/10;
	}
	if(temp==*pr)
	printf("Armstrong Number");
	else
	printf("Not Armstrong Number");
}

