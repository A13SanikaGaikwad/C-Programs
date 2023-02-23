struct Emp
{
	int id;
	char name[20];
};
void storeEmployee(struct Emp*,int);
void displayArrEmp(struct Emp*,int);
void main()
{
	struct Emp arr[3];
	storeEmployee(arr,3);
	displayArrEmp(arr,3);
}
void storeEmployee(struct Emp*arr,int t)
{
	int i;
     	for(i=0;i<t;i++)
     	{
			printf("Enter the ID: ");
			scanf("%d",&arr[i].id);
			printf("Enter the name: ");
			scanf("%s",&arr[i].name);	
		}
		return arr;
}
void displayArrEmp(struct Emp*arr,int t)
{
	int i;
		for(i=0;i<t;i++)
		{
			printf("\nID no %d is %s",arr[i].id,arr[i].name);
		}
		return arr;
}
