//check if the given number is even or odd-with parameter without returntype

void check(int);
void main()
{
	int no;
	printf("Enter No ");
    scanf("%d",&no); 
	check(no);
}
void check(int num)
{
    int r;
    r=num%2;
    if(r!=0)
   {
        printf("Odd");
   }
   else
    {
        printf("Even");
    }
}
