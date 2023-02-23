/* Write a program to Calculate the total cost of painting the interior of building with four equal sized walls.*/

int painting(int,int);
void main()
{
	float l,b,c,a,total;
	printf("Enter the Wall Length: ");
	scanf("%f",&l);
	printf("Enter the Wall Breadth: ");
	scanf("%f",&b);
	printf("Enter the cost of wall: ");
	scanf("%f",&c);
	a=l*b;
	total=painting(a,c);
	printf("Total cost of Painting inteior of bullding: %f",total);
}
int painting(int area,int cost)
{
	int totalcost;
	totalcost=area*cost;
	return totalcost;
}
