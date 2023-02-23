// Swap 

void main()
{
	int x,y;
	printf("Enter X: ");
	scanf("%d",&x);
	printf("Enter Y: ");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swapping : x = %d, y = %d", x, y);
}
