// Function

void div();                                       //declaration
void main()                                       //calling
{
	printf("Start");
    div();                                        //call
	printf("\nEnd");
}
void div()                                        //called
{
	int a=10;
	int b=10;
	int c;                                        //Body
	c=a/b;
	printf("\nAnswer is %d",c);
	
}
