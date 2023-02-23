/*program using while loop
sum of even numbers and sum of odd Numbers using scanf*/

void main()
{
	int no,endno;
	int sumeven=0,sumodd=0;
	printf("\n Enter Start Number ");
	scanf("%d",&no);
	printf("\n Enter End  Number ");
	scanf("%d",&endno);
	
	while(no<=endno)
	{
	    int r;
	    r=no%2;
		if(r!=0)
		{
	      sumodd=sumodd+no;
		}
		else
		{
		   sumeven=sumeven+no;
		}
		no++;
	}
	
	printf("\n Sum of Even numbers = %d",sumeven);
	printf("\n Sum of odd numbers = %d",sumodd);
	
}
