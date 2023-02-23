/*print strong number in a given range from 1 to n-
A Strong number is a number,where the sum of the factorial of the digits is equal to the number itself.*/

void main()
{
	int temp,i,fact,rem,sum = 0,num,N;
	printf("Enter N number:");
	scanf("%d",&N);
	printf("\n Strong number in a given range from 1 to %d are:\n",N);
	
   for(temp = 1;temp <= N;temp++)
   {
	   num=temp;
	   sum=0;
	   while(num > 0)
	   {
	    	i = 1,fact = 1;
		    rem = num % 10;
		    while(i <= rem)
		    {
		    	fact = fact*i;
			    i++;
		    }
		    sum = sum + fact;
		    num = num / 10;
	   }
    	if(sum == temp)
		   printf("%d\n",temp);	
    }
    return 0;
}
