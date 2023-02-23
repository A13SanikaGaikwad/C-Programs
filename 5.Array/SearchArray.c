//Search Array:without parameter with returntype

int SearchArray();
void main()
{
	int SearchOfArray;
	SearchOfArray=SearchArray();
	if(SearchOfArray == 1)
	{
		printf(" Array element Found");
	}
	else
	{
		printf(" Array element not Found");
	}
}
int SearchArray()
{
	int arr[5]={10,21,58,8,2};
	int search,i,flag=0;
	printf("\n Enter element to search: ");
	scanf("%d",&search);
	
	for(i=0;i<5;i++)
	{
		if(arr[i] == search)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
