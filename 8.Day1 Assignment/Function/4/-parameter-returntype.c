//check if the given number is even or odd-without parameter without returntype

void check();
void main()
{
	check();
}
void check()
{
int num;
int r;
printf("Enter No ");
scanf("%d",&num);
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
