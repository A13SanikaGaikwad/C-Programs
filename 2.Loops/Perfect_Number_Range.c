/*print perfect number in a given range from 1 to n - a Perfect number is a positive integer that is equal to the sum of its positive 
divisors,excluding the number itself.
for example, 6 is a positive integer that is completely divisible by 1,2 and 3.we know that the number is 
also divisible by itself but we will include it in the addition of divisors.when we add these divisors
(1+2+3=6),it produces 6,which is equal to the number that we have considered.so,we can say that
 6 is a perfect number.*/
 
void main()
{
	int endnum,i,sum,num;
	printf("Enter Ending Number: ");
	scanf("%d",&endnum);
	printf("Perfect number in a range from 1 to %d are:\n",endnum);
	
    for(num=1;num<=endnum;num++)
    {
    	sum=0;
    	for(i=1;i<=num/2;i++)
	   {
		   if(num % i == 0)
		   {
		   	 sum=sum+i;
		   }
	   }
	    if(sum == num)
	    printf("%d\n",num);	
	}
}



