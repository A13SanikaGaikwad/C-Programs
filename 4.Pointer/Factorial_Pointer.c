//Factorial Using Pointer 

void main()
{
	int num,i,fact,*p1,*p2;
	p1=&num;
	p2=&fact;
	printf("Enter the Number ");
	scanf("%d",p1);
	fact=1;
	for(i=1;i<=*p1;i++)
	{
		*p2=*p2*i;
	}
		
	printf("\n Factorial of %d is %d",*p1,*p2);
}
