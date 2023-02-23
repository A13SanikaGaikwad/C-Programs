//Accept two numbers from user and an operator (+,-,/,*,%)based on that perform the desired operations.-without parameter with returntype

int arithmatic();
void main()
{
	int a_operation;
	a_operation=arithmatic();
	printf("is \t %d",a_operation);
}
int arithmatic()
{
	int a;
	int b;
    int c;
    int ch;
    printf("\n Enter first number: ");
    scanf("%d",&a);
    printf("\n Enter Second number: ");
    scanf("%d",&b);
    printf("\n Enter Your Choice 1.Addition 2.Substraction 3.Multiplication 4.Division 5.Remainder");
    scanf("%d",&ch);
    if(ch==1)
    {
    	c=a+b;
    	printf("\n Addition \t ");
	    return c;
	}
    if(ch==2)
    {
        c=a-b;
        printf("\n Substration \t ");
	    return c;	
	}
	if(ch==3)
	{ 
	    c=a*b;
	    printf("\n Multiplication \t ");
	    return c;
	}
	if(ch==4)
	{
		c=a/b;
	    printf("\n Division \t ");
	    return c;
	}
	if(ch==5)
	{
		c=a%b;
	    printf("\n Remainder \t ");
	    return c;
    }
}


