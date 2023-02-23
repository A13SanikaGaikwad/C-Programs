struct Emp
{
	int id;
	char name[20];
};
void main()
{
	int i;
	struct Emp arr[3];
     	for(i=0;i<3;i++)
     	{
			printf("Enter the ID: ");
			scanf("%d",&arr[i].id);
			printf("Enter the name: ");
			scanf("%s",&arr[i].name);	
		}
		for(i=0;i<3;i++)
		{
			printf("\nID no %d is %s",arr[i].id,arr[i].name);
		}
}
