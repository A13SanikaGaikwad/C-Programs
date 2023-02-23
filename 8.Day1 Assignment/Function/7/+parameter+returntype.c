//write a program to find greatest of three numbers using nested if-else-with parameter with returntype

int greatest(int,int,int);
void main()
{
	int no1,no2,no3;
	printf("Enter Three Numbers:\n");
	scanf("%d %d %d",&no1,&no2,&no3);
	
	int greatest_no;
	greatest_no=greatest(no1,no2,no3);
	printf("\n%d is greatest number.",greatest_no);
}
int greatest(int n1,int n2,int n3)
{
	if(n1>=n2)
	{
		if(n1>=n3)
		return n1;
     	else
     	return n3;
    }
    else
    {
    	if(n2>=n3)
		return n2;
     	else
     	return n3;
	}
}
