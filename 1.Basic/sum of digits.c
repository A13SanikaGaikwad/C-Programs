/* program without loop
sum of digits*/

void main()
{
	int num,q,r,q1,r1,sum;
	
	printf("Enter Three Digit Number ");
	scanf("%d",&num);
	
    q = num/10;
	r = num%10;
	q1 = q/10;
	r1=  q%10;
	sum= r+r1+q1;
	
	printf("\nSum Of Digits is %d",sum);	
}
