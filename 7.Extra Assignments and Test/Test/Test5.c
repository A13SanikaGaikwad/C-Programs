/*A man goes for shopping.He buys 5 products.Accept the price of all products and display the total bill after adding 18%GST.*/

void main()
{
	float P1,P2,P3,P4,P5,total,GST,totalbill;
	printf("\n Enter price of 1st product: ");
	scanf("%f",&P1);
	printf("\n Enter price of 2nd product: ");
	scanf("%f",&P2);
	printf("\n Enter price of 3rd product: ");
	scanf("%f",&P3);
	printf("\n Enter price of 4th product: ");
	scanf("%f",&P4);
	printf("\n Enter price of 5th product: ");
	scanf("%f",&P5);
	
	total=P1+P2+P3+P4+P5;
	printf("\n Total Bill Before GST are: %f",total);
	GST=total*(0.18);
	totalbill=total+GST;
	printf("\n Total Bill After Adding GST are: %f",totalbill);
}
