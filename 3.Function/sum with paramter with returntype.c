/*with parameter withreturntype
Sum*/

int sum(int,int);
void main()
{
	int a=10,b=20;
	int ans;
	ans=sum(a,b);
	printf("sum is %d",ans);
}
int sum(int x,int y)
 {
 	int c;
 	c=x+y;
 	return c;
 }
