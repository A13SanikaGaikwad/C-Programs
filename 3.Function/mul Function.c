// Function

void mul();                                       //declaration
void main()                                       //calling
{
	printf("Start");
    mul();                                        //call
	printf("\nEnd");
}
void mul()                                        //called
{
	int a=30;
	int b=20;
	int c;                                        //Body
	c=a*b;
	printf("\nAnswer is %d",c);
	
}
