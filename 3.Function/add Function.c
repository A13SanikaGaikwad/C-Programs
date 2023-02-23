// Function

void add();                                       //declaration
void main()                                       //calling
{
	printf("Start");
    add();                                        //call
	printf("\nEnd");
}
void add()                                        //called
{
	int a=10;
	int b=20;
	int c;                                        //Body
	c=a+b;
	printf("\nAnswer is %d",c);
	
}
