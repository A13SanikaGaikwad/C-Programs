/*if else and operators assignments
 Accept 2 no. from user for division if second no.is zero then print an error*/
 
#include<stdio.h> 
void main()
{
	int Fnum,Snum, Tnum;
	
	printf("Enter First Number: ");
	scanf("%d",&Fnum);
	printf("Enter Second Number: ");
	scanf("%d",&Snum);
	if(Snum == 0)
	{
		printf("\nError :Division Not possible because Second No.is zero");
	}
	else
	{
		Tnum=Fnum/Snum;
		printf("\nAfter Division= %d",Tnum);
	}
}
