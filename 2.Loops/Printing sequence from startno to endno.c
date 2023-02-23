/*programs using for loop
Printing sequence from startno to endno using scanf*/

void main()
{
   int num,endnum;
   printf("Printing Sequence start no ");
   scanf("%d",&num);
   printf("Printing Sequence end no ");
   scanf("%d",&endnum);
   
   
   
   for(num; num<=endnum; num++)
   {
   	printf("\n %d",num);	
   }
   
}
