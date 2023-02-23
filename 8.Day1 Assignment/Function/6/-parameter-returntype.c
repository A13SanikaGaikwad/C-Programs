//find the price of an item when discount is given (specify different discount based on price)-without parameter without returntype

void price();
void main()
{
	price();
}
void price()
{
  int original_price; 
  int discount;                     
  int discounted_price;                    
  
  printf("Enter price of an item \n");
  scanf("%d",&original_price);
  
  printf("Enter discount of an item in percentage \n");
  scanf("%d",&discount);
  
  discounted_price = original_price - (original_price*discount/100);     //Discount = (original_price*discount/100) 
  printf("\nDiscounted price is %d", discounted_price);
  
}


