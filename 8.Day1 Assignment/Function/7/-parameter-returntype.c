//write a program to find greatest of three numbers using nested if-else-without parameter without returntype

void greatest();
void main()
{
	greatest();
}
void greatest()
{
	int n1,n2,n3;
	printf("Enter Three Numbers:\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>=n2)
	{
		if(n1>=n3)
		{
		   printf("\n%d is greatest number.",n1);
     	}
     	else
     	{
     		printf("\n%d is greatest number.",n3);
		}
    }
    else
    {
    	if(n2>=n3)
		{
		   printf("\n%d is greatest number.",n2);
     	}
     	else
     	{
     		printf("\n%d is greatest number.",n3);
		}
	}
}
