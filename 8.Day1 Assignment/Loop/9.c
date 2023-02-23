/*Display a Menu to the user (like 1.Even Odd 2.Basic Salary etc),ask the user to enter the choice,
then based on that perform the desired operations*/
void main()
{
	int choice;
	printf("Enter Your Choice: 1.Even Odd 2.Basic Salary :\n");
	scanf("%d",&choice);
	
	if(choice == 1)
	{
		int  num;
	    int r;
	    printf("Enter No ");
	    scanf("%d",&num);
	    r=num%2;
	    if(r!=0)
	    {
	    	printf("Odd");
	    }
     	else
	    {
		    printf("Even");
	    }
	}
	
	else if(choice == 2)
	{
		int Basic,da,ta,hra,Total_Salary;
	    printf("Enter Basic Salary: ");
	    scanf("%d", &Basic);
	
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
	
	    printf("\n salary of da is: %d",da);
	    printf("\n salary of ta is: %d",ta);
	    printf("\n salary of hra is: %d",hra);
	    Total_Salary= Basic+da+ta+hra;
	    printf("\n Total Salary is: %d",Total_Salary);
	}
	else
	{
		printf("Invalid Choice");
	}
	
}
