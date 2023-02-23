//start printing pattern

void main()
{
	int n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
