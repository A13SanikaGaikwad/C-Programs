//4.check if the given number is even or odd-Pointer with Function

void check(int*);
void main()
{
	int no;
	printf("Enter No ");
    scanf("%d",&no); 
	check(&no);
}
void check(int *num)
{
    int r;
    r=*num%2;
    if(r!=0)
   {
        printf("%d is Odd Number",*num);
   }
   else
    {
        printf("%d is Even Number",*num);
    }
}
