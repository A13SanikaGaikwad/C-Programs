// Palindrome Number Using For Loop

void main()
{
    int num,rem,original,reversed=0;
	printf("Enter The Num ");
	scanf("%d",&num);
	
	for(original=num;num>0;num=num/10)
	{
	    rem=num%10;
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
