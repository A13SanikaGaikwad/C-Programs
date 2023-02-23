//Write a swap function using pass by value and pass by address.

void swap(int*,int*);
void main()
{
	int first,second;
	printf("\n Enter the First Number: ");
	scanf("%d",&first);
	printf("\n Enter the Second Number: ");
	scanf("%d",&second);
	swap(&first,&second);
	printf("\n Swap Numbers: First and Second are %d and %d ",first,second);
}
void swap(int *f,int *s)
{
	int temp;
	temp=*f;
	*f=*s;
	*s=temp;
}
