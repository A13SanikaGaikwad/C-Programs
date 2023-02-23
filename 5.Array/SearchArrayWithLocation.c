//Search Array: with parameter without returntype

void SearchArray(int[],int,int);
void main()
{
	int arr[5]={10,21,58,8,2};
	
	SearchArray(arr,5,8);
}
void SearchArray(int ptr[],int S,int Search)
{	
    int i;
	for(i=0;i<S;i++)
	{
		if(ptr[i] == Search)
		{
			printf(" %d is present at location %u",Search,i+1);
			break;
		}
	}
	if(i == S)	
	printf(" %d is not present in the array",Search);
}
