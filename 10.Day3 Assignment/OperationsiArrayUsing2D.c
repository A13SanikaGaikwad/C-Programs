/*write a program to create an array of integers and perform following operations on that array
 like finding the sum,average,maximum,minimum number in that array.Accept the numbers of the array from user.*/
 
#include<stdio.h>
void Sum(int*,int,int);
void Average(int*,int,int);
void Maximum(int*,int,int);
void Minimum(int*,int,int);
void main()
{
	int row,column,i,j;
	printf("Enter Row And Column: \n");
	scanf("%d %d",&row,&column);
	int array[row][column];
	printf("Enter Array Elements: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("array[%d][%d]= ",i,j);
		   	scanf("%d",&array[i][j]);	
		}
	}
	printf("\nPrinting 2D Array: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	Sum((int*)array,row,column);
	Average((int*)array,row,column);
	Maximum((int*)array,row,column);
	Minimum((int*)array,row,column);
}
void Sum(int *array,int row,int column)
{
   int i,j,Sum_rows;
   for(i=0;i<row;i++)
   {
   	    Sum_rows=0;
   	    for(j=0;j<column;j++)
        {
   	        Sum_rows=Sum_rows+*((array+i*column)+j);
        }
       printf("Summation Of row Elements = %d\n",Sum_rows);
   }
   printf("\n");
   int Sum_column;
   for(j=0;j<column;j++)
   {
   	    Sum_column=0;
   	    for(i=0;i<row;i++)
        {
   	        Sum_column=Sum_column+*((array+i*column)+j);
        }
       printf("Summation Of column Elements = %d\n",Sum_column);
   }
}
void Average(int *array,int row,int column)
{
   int i,j,sum=0;
   float average;
   for(i=0;i<row;i++)
   {
   	    for(j=0;j<column;j++)
        {
   	        sum=sum+*((array+i*column)+j);
        }
   }
   average=sum/(row*column);
   printf("\nAverage Of All the Elements in Array = %.2f\n",average);
}
void Maximum(int *array,int row,int column)
{
	int i,j,maxrow,maxcolumn;
	int max=*((array+0*column)+0);
	for(i=0;i<row;i++)
   {
   	    for(j=0;j<column;j++)
        {
   	        if(max<*((array+i*column)+j))
   	        {
   	           max=*((array+i*column)+j);	
   	           maxrow=i;
   	           maxcolumn=j;
			}
        }
   }
   printf("\nMaximum Elements in Array = %d and their location is array[%d][%d]\n",max,maxrow,maxcolumn);
}
void Minimum(int *array,int row,int column)
{
	int i,j,minrow=0,mincolumn=0;
	int min=*((array+0*column)+0);
	for(i=0;i<row;i++)
   {
   	    for(j=0;j<column;j++)
        {
   	        if(min>*((array+i*column)+j))
   	        {
   	           min=*((array+i*column)+j);	
   	           minrow=i;
   	           mincolumn=j;
			}
        }
   }
   printf("\nMinimum Elements in Array = %d and their location is array[%d][%d]\n",min,minrow,mincolumn);
}
