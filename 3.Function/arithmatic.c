/* Without Parameter with returntype
Arithmatic*/

int arithmatic();
void main()
{
   int ans;
   ans=arithmatic();
   printf("Answer is %d",ans);
}
int arithmatic()
{
	int a,b,c,ch;
	printf("Enter a ");
	scanf("%d",&a);
	printf("Enter b ");
	scanf("%d",&b);
	printf("Enter Your Choice 1.Addition 2.Substraction 3.Multiplication 4.Division 5.Remainder \n");
	scanf("%d",&ch);
	if(ch==1)
	{
		c=a+b;
	}
	if(ch==2)
	{
		c=a-b;
	}
	if(ch==3)
	{
		c=a*b;
	}
	if(ch==4)
	{
		c=a/b;
	}
	if(ch==5)
	{
		c=a%b;
	}
	return c;
}
