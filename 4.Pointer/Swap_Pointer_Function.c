//Swap Using Pointer,Function

void SwapFunc(int*,int*);
void main()
{
	int num1,num2;
	printf("\nEnter value of num1:");
	scanf("%d",&num1);
	printf("\nEnter value of num2:");
	scanf("%d",&num2);
	
	printf("\nBefore Swapping: num1 is: %d,num2 is: %d",num1,num2);
	SwapFunc(&num1,&num2);
	printf("\nAfter Swapping:  num1 is: %d,num2 is: %d",num1,num2);	
}
void SwapFunc(int* n1,int* n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
