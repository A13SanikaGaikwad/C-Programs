/*write a program to accept year from user and check if it is a leap year or not.*/

void main()
{
	int year;
	printf(" Enter the year: ");
	scanf("%d",&year);
	
	if((year%4 == 0) && (year%100 != 0) || (year%400 == 0))
	{
	    printf(" Leap year");
	}
	else
	{
		printf(" Not a Leap year");
	}
}
