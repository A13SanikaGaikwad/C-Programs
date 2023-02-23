//check if the given number is even or odd-with parameter with returntype

int check(int);
void main()
{
	int no;
	printf("Enter No ");
    scanf("%d",&no);
	int ans;
	ans=check(no);
	if(ans!=0)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
}
int check(int num)
{
int r;
r=num%2;
return r;
}
