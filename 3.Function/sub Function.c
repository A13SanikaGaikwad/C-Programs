// Function

void sub();                                       //declaration
void main()                                       //calling
{
	printf("Start");
    sub();                                        //call
	printf("\nEnd");
}
void sub()                                        //called
{
	int a=30;
	int b=20;
	int c;                                        //Body
	c=a-b;
	printf("\nAnswer is %d",c);
	
}
