// Palindrome Number Using while Loop

void main()
{
    int num,rem,original,reversed=0;
	printf("Enter The Num ");
	scanf("%d",&num);
	original=num;
	while(num>0)
	{
	    rem=num%10;
	    num=num/10;
		reversed=reversed*10+rem;
	}
	
    if(original == reversed)
    {
    	printf("\n%d is a Pallindrome number",original);
	}
	else
	{
		printf("\n%d is Not Pallindrome number",original);
	}
	
}
