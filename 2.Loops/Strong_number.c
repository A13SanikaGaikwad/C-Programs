/*check strong number-
A Strong number is a number,where the sum of the factorial of the digits is equal to the number itself.*/

void main()
{
	int num,i,fact,rem,sum=0,temp;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("\n");
	temp=num;
	while(num)
	{
		i=1,fact=1;
		rem=num%10;
		while(i<=rem)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==temp)
		printf("%d is a strong number\n",temp);
	else
	    printf("%d is not a strong number\n",temp);
}
