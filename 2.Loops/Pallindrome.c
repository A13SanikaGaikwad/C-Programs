//Pallindrome

int checkpallindrome(int);
void main()
{
 int number;
 printf("Enter a Number:");
 scanf("%d",&number);
 if(checkPallindrome(number)==0)
 {
	 printf("%d is a pallindrome number\n",number); 
 }	
 else
 {
 	printf("%d is not a pallindrome number\n",number);
 }
}
int checkPallindrome(int number)
{ 
  int temp,remainder,rev=0;
  temp = number;
  while(number!=0)	
  {
  	remainder=number%10;
  	rev=rev*10+remainder;
  	number=number/10;
  }
  if(rev==temp)
  {
  	 return 0;
  }
  else
  {
  	return 1;
  }
}
