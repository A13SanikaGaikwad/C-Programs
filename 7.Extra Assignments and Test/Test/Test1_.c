/*write a program to accept year from user and check if it is a leap year or not.*/

void leap(int);
void main()
{
	int year;
	printf(" Enter the year: ");
	scanf("%d",&year);
	leap(year);
}
void leap(int y)
{
	if((y%4 == 0) && (y%100 != 0) || (y%400 == 0))
	{
	    printf(" Leap year");
	}
	else
	{
		printf(" Not a Leap year");
	}
}
