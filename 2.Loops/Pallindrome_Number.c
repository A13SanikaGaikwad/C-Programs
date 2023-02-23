/*check the given number is pallindrome or not-
An integer is a pallindrome if the reverse of that number is equal to the original number*/

void main()
{
	int num,rev=0,rem,original;
	printf("Enter an integer:");
	scanf("%d",&num);
	original=num;
	
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(original==rev)
	  printf("%d is a pallindrome number",original);
	else
	  printf("%d is not a pallindrome number",original);	
}
