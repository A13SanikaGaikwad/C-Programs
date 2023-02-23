/*Function Assignments
  Accept a number from user and print the * pattern */
  
#include<stdio.h>

void star(int);
void main()
{
	int rows,columns;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	star(rows);
}
void star(int row)
{
	int i,j;
	for(i=1;i<=row;++i)
	{
	   for(j=1;j<=i;++j)
	   {
		   printf("*");
   	   }
        printf("\n");
    }
}
