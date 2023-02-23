/*Accept the price from user.Ask the user if he is a student(user may say yes or no).if he is a student 
and he has purchased more than 500 than discount is 20% otherwise discount is 10%.But if he is not a student 
then if has purchased more than 600 discount is 15% otherwise there is not discount-
Without Parameter With Returntype */

int Student();
int Customer();
void main()
{
	int ch;
	printf("\n1.Student \n2.Customer \n");
	scanf("%d",&ch);
	if(ch == 1)
	{
		int Stu;
		Stu=Student();
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
		Cust=Customer();
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
int Student()
{
		int price;
        printf("Enter the Price \n");
	    scanf("%d",&price);
	    int flag;
		printf("I am a Student \n");	
		if(price>=500)
		flag=1;
        else
        flag=2;
        
    return flag;
}
int Customer()
{
	    int price;
	    printf("Enter the Price \n");
	    scanf("%d",&price);
	    int flag;
        printf("I am a Customer \n");
		if(price>=600)
		flag=1;
        else
        flag=2;
		
	return flag;	
}
