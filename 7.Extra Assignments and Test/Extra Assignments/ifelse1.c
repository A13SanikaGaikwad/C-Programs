/*if else and operators assignments
 Accept PCM marks from user and find percentage,division and total*/
 
#include<stdio.h> 
void main()
{
	int Pmarks,Cmarks,Mmarks;
	int total,division,percentage;
	
	printf("Enter Physics Marks: ");
	scanf("%d",&Pmarks);
	printf("Enter Chemistry Marks: ");
	scanf("%d",&Cmarks);
	printf("Enter Mathematics Marks: ");
	scanf("%d",&Mmarks);
	
	total=Pmarks+Cmarks+Mmarks;
	printf("\nTotal marks of PCM are: %d",total);
	
	percentage=total/3;
	printf("\nPercentage of PCM are: %d\n",percentage);
	
	if(percentage>=60)
	   printf("Division :First");
	else if(percentage<60 && percentage>=50)
	    printf("Division :Second");
	else if(percentage<50 && percentage>=40)
	    printf("Division :Pass");
	else
	    printf("Division :Fail");
}
