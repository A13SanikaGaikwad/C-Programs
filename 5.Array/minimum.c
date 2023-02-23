//Minimum element in Array

int MinElement(int[],int);
void main()
{
	int arr[5]={10,21,58,8,2};
	int Minimum;
	Minimum=MinElement(arr,5);
	printf("\n Minimum Element is %d",Minimum);
}
int MinElement(int ptr[],int S)
{
	int min=ptr[0],i;
	for(i=0;i<S;i++)
	{
		if(ptr[i]<min)
		min=ptr[i];
	}
	return min;
}
	
