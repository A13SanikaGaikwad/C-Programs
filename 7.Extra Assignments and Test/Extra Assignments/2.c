/*2
  create a structure book with data members as bname,id,author,price.accept the values of all these members from user and display them
*/

#include<stdio.h>
struct book
{
	char bname[20];
	int id;
	char author[15];
	double price;	
};

void main()
{
	int size,i;
	printf("Enter How Many Book Details You Want to Entered: ");
	scanf("%d",&size);
	
	struct book b[size];
	for(i=0;i<size;i++)
	{
		printf("\nEnter Details Of Book %d \n",i+1);
		printf("Enter Book Name: ");
		scanf("%s",b[i].bname);
		printf("Enter Book id: ");
		scanf("%d",&b[i].id);
		printf("Enter Book Author: ");
		scanf("%s",b[i].author);
		printf("Enter Book Price: ");
		scanf("%lf",&b[i].price);
	}
	for(i=0;i<size;i++)
	{
		printf("\nBook %d \n",i+1);
		printf("Book Name: %s\n",b[i].bname);
		printf("Book id: %d\n",b[i].id);
		printf("Book Author: %s\n",b[i].author);
		printf("Book Price: %lf\n",b[i].price);
	}
	
}
