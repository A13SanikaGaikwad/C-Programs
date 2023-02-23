//7.write a program to find greatest of three numbers using nested if-else-Pointer with Function

void greatest(int*,int*,int*);
void main()
{
	int no1,no2,no3;
	printf("Enter Three Numbers:\n");
	scanf("%d %d %d",&no1,&no2,&no3);
	
	greatest(&no1,&no2,&no3);
}
void greatest(int *n1,int *n2,int *n3)
{	
	if(*n1>=*n2)
	{
		if(*n1>=*n3)
		{
		   printf("\n%d is greatest number.",*n1);
     	}
     	else
     	{
     		printf("\n%d is greatest number.",*n3);
		}
    }
    else
    {
    	if(*n2>=*n3)
		{
		   printf("\n%d is greatest number.",*n2);
     	}
     	else
     	{
     		printf("\n%d is greatest number.",*n3);
		}
	}
}
