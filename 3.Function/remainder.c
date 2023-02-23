/* Without Parameter without returntype
Remainder*/

void remainder();
void main()
{
  remainder();	
}
void remainder()
{
	int a;
	int b;
	printf("\n Enter a ");
	scanf("%d",&a);
	printf("\n Enter b ");
	scanf("%d",&b);
	
	int r;
	r=a%b;
	printf("\n Remainder is %d",r);
}
