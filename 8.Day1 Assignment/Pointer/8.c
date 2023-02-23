//8.Accept two numbers from user and an operator (+,-,/,*,%)based on that perform the desired operations.-with parameter without returntype

void arithmatic(int*,int*,int*);
void main()
{
	int a;
	int b;
	int choice;
	printf("\n Enter first number: ");
    scanf("%d",&a);
    printf("\n Enter Second number: ");
    scanf("%d",&b);
    printf("\n Enter Your Choice 1.Addition 2.Substraction 3.Multiplication 4.Division 5.Remainder \n");
    scanf("%d",&choice);
	
	arithmatic(&a,&b,&choice);
}
void arithmatic(int *a1,int *b1,int *ch)
{
    int c;
    if(*ch==1)
    {
    	c=*a1+*b1;
	    printf("\n Addition is \t %d",c);
	}
    if(*ch==2)
    {
        c=*a1-*b1;
	    printf("\n Substraction is \t %d",c); 	
	}
	if(*ch==3)
	{ 
	    c=*a1**b1;
	    printf("\n Multiplication is \t %d",c); 
	}
	if(*ch==4)
	{
		c=*a1/(*b1);
	    printf("\n Division is \t %d",c);
	}
	if(*ch==5)
	{
		c=*a1%*b1;
	    printf("\n Remainder  is \t %d",c);
    }
}


