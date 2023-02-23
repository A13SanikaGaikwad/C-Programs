//check if the given number is even or odd-without parameter with returntype

int check();
void main()
{
	int ans;
	ans=check();
	if(ans!=0)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
}
int check()
{
int num;
printf("Enter No ");
scanf("%d",&num);
int r;
r=num%2;
return r;
}
