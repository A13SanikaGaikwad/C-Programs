//Accept two numbers from user and an operator (+,-,/,*,%)based on that perform the desired operations.-with parameter with returntype

int arithmatic(int,int,int);
void main()
{
	int a;
	int b;
    int choice;
    printf("\n Enter first number: ");
    scanf("%d",&a);
    printf("\n Enter Second number: ");
    scanf("%d",&b);
    printf("\n Enter Your Choice 1.Addition 2.Substraction 3.Multiplication 4.Division 5.Remainder");
    scanf("%d",&choice);
    
	int a_operation;
	a_operation=arithmatic(a,b,choice);
    printf("is :\t %d",a_operation);	
}
int arithmatic(int a1,int b1,int ch)
{
	int c;
    if(ch==1)
    {
    	c=a1+b1;
	    printf("\n Addition ");
	    return c;
	}
    if(ch==2)
    {
        c=a1-b1;
	    printf("\n Substraction "); 
		return c;	
	}
	if(ch==3)
	{ 
	    c=a1*b1;
	    printf("\n Multiplication ");
		return c; 
	}
	if(ch==4)
	{
		c=a1/b1;
	    printf("\n Division ");
	    return c;
	}
	if(ch==5)
	{
		c=a1%b1;
	    printf("\n Remainder ");
	    return c;
    }
}


