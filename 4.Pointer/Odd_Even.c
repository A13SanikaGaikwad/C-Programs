//odd even pointer 

void main()
{
	int  num;
	printf("Enter No: ");
	scanf("%d",&num);
	int *p1;
	p1=&num;
	
	if(*p1%2 != 0)
	{
	   	printf("Odd");
	}
    else
	{
	    printf("Even");
	}
}
