/* String Assignments
  Accept a number from user,when user enters that in many no.sum of all the no.and
  display result in string format?*/
  
#include<stdio.h>
void main()
{
	int size,i,sum=0,num,rev=0;
	printf("Enter Size of array: ");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
    {
	    printf("Enter Numbers:");
	    scanf("%d",&arr[i]);
	}
    for(i=0;i<size;i++)
    {
	   sum=sum+arr[i];
	}
	printf("Sum Of Numbers: %d\n",sum);
	num=sum;
	while(num!=0)
	{
		rev=(rev*10)+(num%10);
		num=num/10;
	}
	while(rev!=0)
	{
		switch(rev%10)
		{
			case 0:
				printf("Zero ");
			    break;
			case 1:
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5:
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
		}
		rev=rev/10;
	}
}
                           
