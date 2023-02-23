/*Accept the price from user.Ask the user if he is a student(user may say yes or no).if he is a student 
and he has purchased more than 500 than discount is 20% otherwise discount is 10%.But if he is not a student 
then if has purchased more than 600 discount is 15% otherwise there is not discount-
With Parameter With Returntype */

int Student(int);
int Customer(int);
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
		int Stu;
		Stu=Student(price);
		if(Stu == 1)
		{
			printf("Discount is 20% \n");
		}
        else
        {
        	printf("Discount is 10% \n");
		}
	}
	else if(ch == 2)
	{
		int Cust;
		Cust=Customer(price);
		if(Cust == 1)
		{
			printf("Discount is 15% \n");
		}
        else
        {
        	printf("There is No Discount \n");
		}
	}
	else
	{	
		printf("Your Choice are Invalid");
	}
}
int Student(int p)
{
		printf("I am a Student \n");
		int flag;
		if(p>=500)
	    flag=1;
        else
        flag=2;
        
    return flag;
}
int Customer(int p)
{
        printf("I am a Customer \n");
		int flag;
		if(p>=600)
		flag=1;
        else
        flag=2;
		
	return flag;	
}
