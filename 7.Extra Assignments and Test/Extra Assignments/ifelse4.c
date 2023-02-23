/* if-else and operators Assignment
   Accept 3 no.'s from user and find which is greater and also find that is it divisible by other two and if yes then by whom. */
   
#include<stdio.h>
void main()
{
	int no1,no2,no3;
	printf("Enter no1: ");
	scanf("%d",&no1);
	printf("Enter no2: ");
	scanf("%d",&no2);
	printf("Enter no3: ");
	scanf("%d",&no3);
	
	if(no1>no2)
	{
	   if(no1>no3)
	   {
	    	printf("no1 is greater");
	   }
	   else
	   {
	    	printf("no2 is greater");
	   }
   }
   else
   {
   	   if(no2>no3)
   	   {
	    	printf("no2 is greater");
	   }
	   else
	   {
	    	printf("no3 is greater");
	   }
   }
   
   
}
