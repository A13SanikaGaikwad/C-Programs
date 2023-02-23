//write a program to find greatest of three numbers using nested if-else-without parameter with returntype

int greatest();
void main()
{
	int greatest_no;
	greatest_no=greatest();
	printf("\n%d is greatest number.",greatest_no);
}
int greatest()
{
	int n1,n2,n3;
	printf("Enter Three Numbers:\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	
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
