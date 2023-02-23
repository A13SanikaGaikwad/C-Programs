/* If-else Assignment
   Decimal to Binary and Binary to Decimal Conversion? */
   
#include<stdio.h>
void DecimaltoBinary(int);
void BinarytoDecimal(int);
void main()
{
	int choice;
	printf("Enter Your Choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
		int num;
	    printf("\nEnter the Decimal Number for converting to Binary Number:\n");
	    scanf("%d",&num);
		DecimaltoBinary(num);
	}
	else if(choice==2)
	{
		int num;
	    printf("\nEnter the Binary Number for converting to Decimal Number:\n");
	    scanf("%d",&num);
		BinarytoDecimal(num);
	}
}
void DecimaltoBinary(int num)
{
	int arr[10],i;
	for(i=0;num>0;i++)
	{
		arr[i]=num%2;
		num=num/2;	
	}
	printf("Binary Number is:\n");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
void BinarytoDecimal(int num)
{
	int binary_num,decimal_num=0,base=1,rem;
	binary_num=num;
	while(num>0)
	{
		rem=num%10;
		decimal_num=decimal_num+rem*base;
		num=num/10;
		base=base*2;
	}
	printf("Decimal Number is:\n%d",decimal_num);
}
