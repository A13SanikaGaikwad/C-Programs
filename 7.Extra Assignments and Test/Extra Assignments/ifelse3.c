/* if-else and operators Assignment
   Accept no.from user and check if it is 2 digit no and if it is 2 digit no then is it a prime no or not*/
   
#include<stdio.h>
void main()
{
	int no,i,flag=0;;
	printf("Enter no: ");
	scanf("%d",&no);
	
	if(no>9 && no<100)
	{
		printf("%d is two digit no",no);
		if(no==0 || no==1)
	    flag=1;
	    for(i=2;i<=(no/2);++i)
	    {
	    	if(no%i == 0)
	    	{
		       flag=1;
		       break;
		    }
	    }
	    if(flag==0)
	    {
	    	printf("\n%d is prime number",no);
	    }
    	else
	    {
	    	printf("\n%d is not prime number",no);
	    }
	}
	else
	{
		printf("%d is not two digit no",no);
	}
}
