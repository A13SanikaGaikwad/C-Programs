//6.find the price of an item when discount is given (specify different discount based on price)-Pointer with Function

void price(int*,int*);
void main()
{
	int original_price; 
    int discount;
    printf("Enter price of an item \n");
    scanf("%d",&original_price);
  
    printf("Enter discount of an item in percentage \n");
    scanf("%d",&discount);
	
	price(&original_price,&discount);
}
void price(int *O_P,int *D)
{                     
  int discounted_price;                    
  discounted_price = *O_P - (*O_P)*(*D)/100;     //Discount = (original_price*discount/100) 
  
  printf("\nDiscounted price is %d", discounted_price);
  
}


