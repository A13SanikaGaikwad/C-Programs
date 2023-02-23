#include<stdio.h>
struct complex
{
	int real;
	int img;
};
void main()
{
	int i;
	struct complex arr[3];
     	for(i=0;i<3;i++)
     	{
		    printf("Enter the real number: ");
			scanf("%d",&arr[i].real);
			printf("Enter the imaginary number: ");
			scanf("%d",&arr[i].img);
		}
		for(i=0;i<3;i++)
		{
		    printf("\n %d + %di",arr[i].real,arr[i].img);
		}
}
