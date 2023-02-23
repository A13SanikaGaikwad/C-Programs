#include<stdio.h>
struct complex
{
	int real,imag;
};
void storecomplex(struct complex*,int);
void displaycomplex(struct complex*,int);
void main()
{
	struct complex arr[3];
	storecomplex(arr,3);
	displayArrcomplex(arr,3);
}
void storecomplex(struct complex*arr,int t)
{
	int i;
     	for(i=0;i<t;i++)
     	{
			printf("Enter the real: ");
			scanf("%d",&arr[i].real);
			printf("Enter the imaginary: ");
			scanf("%d",&arr[i].imag);
		}
		return arr;
}
void displayArrcomplex(struct complex*arr,int t)
{
	int i;
		for(i=0;i<t;i++)
		{
			printf("\ncomplex: real is %d ,imaginary is %d",arr[i].real,arr[i].imag);
		}
		return arr;
}
