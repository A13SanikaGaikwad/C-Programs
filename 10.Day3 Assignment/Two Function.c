/* Write a function to accept a number as parameter and it should return the summation of digits of that number.
Create one more function which would take same numbers as parameters and its reverse number*/

int Accept(int);
int Reverse(int);
void main()
{
	int number,summation,ReverseNumber;
	printf("\n Enter the Number: ");
	scanf("%d",&number);

    summation=Accept(number);
    printf("\n Summation of Digits Of that %d : %d ",number,summation);
	ReverseNumber=Reverse(number);
    printf("\n Reverse Number of %d is: %d",number,ReverseNumber);
}
int Accept(int num)
{
   	int q,r,sum=0;
	while(num>0)
	{
		q=num/10;
		r=num%10;
		
		sum=sum+r;
		num=q;
	}
    return sum;
}
int Reverse(int num)
{
	int rev=0,r;
    while(num!=0)
    {
    	r=num%10;
    	rev=rev*10+r;
    	num=num/10;
	}
	return rev;
}
    
