/* write a program to accept 3 digit number. if first digit is double of second digit and half of third digit then display
 "yes,you have done it",otherwise display "Please try next time".
 Eg.- 428 , 214 etc.*/
 
 int digit(int);
 void main()
 {
 	int number,Digit_number;
 	printf("\n Enter 3 Digit Number: ");
 	scanf("%d",&number);
	Digit_number=digit(number);
	if(Digit_number == 1)
	{
		printf(" Yes,You have done it.");
	}
	else
	{
		printf(" Please try next time.");
	}
	
 }
 int digit(int n)
 {
 	int F_Digit,S_Digit,T_Digit;
 	
 	T_Digit=n%10;                    //r=n%10
 	S_Digit=(n%100)/10;              //r1=q%10
 	while(n>=10)
 	{
 		n=n/10;
	 }
	F_Digit=n;                     //q1=q/10
	
	if(F_Digit==2*S_Digit   &&   F_Digit==T_Digit/2)
	{
		return 1;
	}
	else
	{
	    return 0;
	}
 }
