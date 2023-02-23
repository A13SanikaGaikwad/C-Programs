/*Calculating total salary based on basic .if basic <=5000 da,ta and hra will be 10%,20% and 25% respectively 
otherwise da,ta and hra will be 15%,25% and 30% respectively.*/

void main()
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

