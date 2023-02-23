/*A man goes for shopping.He buys 5 products.Accept the price of all products and display the total bill after adding 18%GST.*/

void main()
{
	int product[5];
	int i,total=0,totalbill,GST;
	for(i=1;i<=5;i++)
	{
		printf("Enter Price of Product %d is: ",i);
		scanf("%d",&product[i]);
	}
	printf("\nCost of 5 Products are: ");
	for(i=1;i<=5;i++)
	{
		printf("\n%d",product[i]);
		total=total+product[i];
		
	}
	
	printf("\n total: %d",total);
	printf("\n\nTotal Bill Before GST are: %d",total);
	GST=total*(0.18);
	totalbill=total+GST;
	printf("\n\nTotal Bill After Adding GST are: %d",totalbill);
}
