/* Print Fibonacci Series-
In case of fibonacci series, next number is the sum of previous two numbers 
for example 0,1,1,2,3,5,8,13,21 etc.The First two numbers of fibonacci series 0 and 1.*/

void main()
{
   int n1=0,n2=1,n3,i,number;
   printf("Enter the number of elements:");
   scanf("%d",&number);
   printf("\n%d %d",n1,n2);   //printing 0 and 1
   for(i=2;i<number;++i)      //loop starts from 2 because 0 and 1 already printed
   {
   	n3=n1+n2;
   	printf(" %d",n3);
   	n1=n2;
   	n2=n3;
   }
}

