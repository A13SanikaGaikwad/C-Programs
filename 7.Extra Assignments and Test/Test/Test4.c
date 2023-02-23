/* Write a program to Calculate the total cost of painting the interior of building with four equal sized walls.*/

void main()
{
	float l,b,cost,area,totalcost;
	printf("Enter the Wall Length: ");
	scanf("%f",&l);
	printf("Enter the Wall Breadth: ");
	scanf("%f",&b);
	printf("Enter the cost of wall: ");
	scanf("%f",&cost);
	area=l*b;
	totalcost=area*cost;
	printf("Total cost of Painting inteior of bullding: %f",totalcost);
}
