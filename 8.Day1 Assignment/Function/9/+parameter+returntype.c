/*Display a Menu to the user (like 1.Even Odd 2.Basic Salary etc),ask the user to enter the choice,
then based on that perform the desired operations
with parameter with returntype*/

int Even_Odd();
int Salary();
void main()
{
	int choice;
	printf("Enter Your Choice: 1.Even Odd 2.Basic Salary :\n");
	scanf("%d",&choice);
	if(choice == 1)
	{
		int  num;
		printf("Enter No ");
	    scanf("%d",&num);
		int E_O;
		E_O=Even_Odd(num);
		if(E_O!=0)
	    {
	    	printf("Odd");
	    }
     	else
	    {
		    printf("Even");
	    }
	}
	else if(choice ==2)
	{
		int Basic_Salary;
	    printf("Enter Basic Salary: ");
	    scanf("%d", &Basic_Salary);
	    int T_S;
	    T_S=Salary(Basic_Salary);	
	    printf("\n Total Salary is: %d",T_S);
	}
	else
	{
		printf("Invalid Choice");
	}
}
int Even_Odd(int No)
{
	    int r;
	    r=No%2;
	    return r;
}
int Salary(int Basic)
{
	int da,ta,hra,Total_Salary;
	    if(Basic<=5000)
	    {
	    	da= (Basic*10)/100;
		    ta= (Basic*20)/100;
		    hra= (Basic*25)/100;
	    }
	    else
	    {
		   da= (Basic*15)/100;
		   ta= (Basic*25)/100;
		   hra= (Basic*30)/100;
	    }
	    Total_Salary= Basic+da+ta+hra;
	    return Total_Salary;
}
