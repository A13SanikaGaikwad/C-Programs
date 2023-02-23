//maximum element in Array

int MaxElement(int[],int);
void main()
{
	int arr[5]={10,21,58,8,2};
	int Maximum;
	Maximum=MaxElement(arr,5);
	printf("\n Maximum Element is %d",Maximum);
}
int MaxElement(int ptr[],int S)
{
	int max=ptr[0],i;
	for(i=0;i<S;i++)
	{
		if(ptr[i]>max)
		max=ptr[i];
	}
	return max;
}
	
