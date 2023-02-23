/*create a two dimensional array.Last rows elements should be summation of every column.
Similarly last columns should be summation of all elements of all rows.*/

#include<stdio.h>
void main()
{
	int row,column,i,j;
	printf("Enter Row And Column: \n");
	scanf("%d %d",&row,&column);
	int array[row][column];
	printf("Enter Array Elements: \n");
	for(i=0;i<row-1;i++)
	{
		for(j=0;j<column-1;j++)
		{
			printf("array[%d][%d]= ",i,j);
		   	scanf("%d",&array[i][j]);	
		}
	}
	
	printf("\nPrinting 2D Array: \n");
    for(i=0;i<row-1;i++)
	{
		for(j=0;j<column-1;j++)
		{
			printf("%d ",array[i][j]);	
	    }
	    printf("\n");
	}
	printf("\n");
	printf("Last Row Elements should be summation of every column: \n"); 
   int Sum_rows;
   for(i=0;i<row-1;i++)
   {
   	    Sum_rows=0;
   	    for(j=0;j<column-1;j++)
        {
   	        Sum_rows=Sum_rows+array[i][j];
        }
        array[i][column-1]=Sum_rows;
   }
  	array[row-1][column-1]=0;
	for(j=0;j<column-1;j++)
	{
		array[row-1][column-1]=array[row-1][column-1]+array[row-1][j];
	}
    for(i=0;i<row-1;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d \t",array[i][j]);	
	    }
	    printf("\n");
    }
    printf("Last Column Elements should be summation of every row: \n");
    int Sum_column;
   for(i=0;i<row-1;i++)
   {
   	    Sum_column=0;
   	    for(j=0;j<column-1;j++)
        {
   	        Sum_column=Sum_column+array[j][i];
        }
        array[row-1][i]=Sum_column;
   }
  	array[row-1][column-1]=0;
	for(j=0;j<column-1;j++)
	{
		array[row-1][column-1]=array[row-1][column-1]+array[row-1][j];
	}
    for(i=0;i<row;i++)
	{
		for(j=0;j<column-1;j++)
		{
			printf("%d \t",array[i][j]);	
	    }
	    printf("\n");
    }
    printf("\nTwo Dimensional Array is:\n");
    for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d \t",array[i][j]);	
	    }
	    printf("\n");
    }
}
