/* print Armstrong Number in the given range from 1 to n-
ArmStrong Number is a number that is equal to the sum of cubes of its digits.
for example 153 are the armstrong numbers so - 1^3+5^3+3^3 = 1+125+27 = 153*/

void main()
{
	int num,r,sum,temp;
	int startno,endno;
	printf("Enter Ending number of range: ");
	scanf("%d",&endno);
	
	printf("Armstrong numbers in given range from 1 to %d are: ",endno);
	
	for(num=1;num<endno;num++)
	{
		temp = num;
		sum = 0;
		
		while(temp!=0)
	    {
	    	r=temp % 10;
	    	temp=temp/10;
		    sum=sum+(r*r*r);
	    }
		if(sum == num)
		printf("%d ",num);	
	}
	printf("\n");
}

