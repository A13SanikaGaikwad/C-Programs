/*check perfect number - a Perfect number is a positive integer that is equal to the sum of its positive 
divisors,excluding the number itself.
for example, 6 is a positive integer that is completely divisible by 1,2 and 3.we know that the number is 
also divisible by itself but we will include it in the addition of divisors.when we add these divisors
(1+2+3=6),it produces 6,which is equal to the number that we have considered.so,we can say that
 6 is a perfect number.*/
 
void main()
{
	int num,rem,sum=0,i;
	printf("Enter a Number: ");
	scanf("%d",&num);
	//Find all divisors and add them
	for(i=1;i<num;i++)
	{
		rem = num%i;
		if(rem == 0)
		{
			sum=sum+i;
		}
	}
if(sum == num)
   printf("%d is a perfect number",num);
else
   printf("\n%d is not a perfect number",num);
}



