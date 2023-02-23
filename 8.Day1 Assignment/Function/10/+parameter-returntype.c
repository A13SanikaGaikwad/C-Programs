/*Accept the price from user.Ask the user if he is a student(user may say yes or no).if he is a student 
and he has purchased more than 500 than discount is 20% otherwise discount is 10%.But if he is not a student 
then if has purchased more than 600 discount is 15% otherwise there is not discount-
With Parameter Without Returntype */

void Student(int);
void Customer(int);
void main()
{
	int price;
	printf("Enter the Price \n");
	scanf("%d",&price);
	int ch;
	printf("\n1.Student \n2.Customer \n");
	scanf("%d",&ch);
	if(ch == 1)
	{
		Student(price);
	}
	else if(ch == 2)
	{
		Customer(price);
	}
	else
	{	
		printf("Your Choice are Invalid");
	}
}
void Student(int p)
{
		printf("I am a Student \n");
		
		if(p>=500)
		{
			printf("Discount is 20% \n");
		}
        else
        {
        	printf("Discount is 10% \n");
		}
}
void Customer(int p)
{
        printf("I am a Customer \n");
		
		if(p>=600)
		{
			printf("Discount is 15% \n");
		}
        else
        {
        	printf("There is No Discount \n");
		}	
}
