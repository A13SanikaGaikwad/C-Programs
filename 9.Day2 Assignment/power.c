//write a program to find m to the power n- Pointer to Function.

void power(int*,int*);
void main()
{
	int m,n;
	printf("\n Enter a value of m : ");
	scanf("%d",&m);
	printf("\n Enter a value of n : ");
	scanf("%d",&n);
	
	power(&m,&n);
}
void power(int *p,int *q)
{
	int temp=*q,result=1;
	while(*q!=0)
	{
		result=result*(*p);
		--(*q);
	}
    printf("\n %d to the power %d is: %d",*p,temp,result);
}
