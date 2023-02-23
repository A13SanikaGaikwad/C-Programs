//Accept two numbers from user and an operator (+,-,/,*,%)based on that perform the desired operations.
void main()
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
	    printf("\n Addition is \t %d",c);
	}
    if(ch==2)
    {
        c=a-b;
	    printf("\n Substraction is \t %d",c); 	
	}
	if(ch==3)
	{ 
	    c=a*b;
	    printf("\n Multiplication is \t %d",c); 
	}
	if(ch==4)
	{
		c=a/b;
	    printf("\n Division is \t %d",c);
	}
	if(ch==5)
	{
		c=a%b;
	    printf("\n Remainder  is \t %d",c);
    }
}


