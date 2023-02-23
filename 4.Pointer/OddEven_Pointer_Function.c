//check if the given number is even or odd Using Pointer,Function

void check(int*);
void main()
{
	int num;
	printf("Enter No: ");
    scanf("%d",&num); 
    int*n = &num;
	check(n);
}
void check(int* n)
{
    if(*n%2!=0)
   {
        printf("Odd");
   }
   else
    {
        printf("Even");
    }
}
