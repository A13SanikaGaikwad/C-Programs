//Sum Of Array

int SumArray(int[],int);
void main()
{
	int arr[5]={10,21,58,8,2};
	int SumOfArray;
	SumOfArray=SumArray(arr,5);
	printf("\n Sum Of Array is %d",SumOfArray);
}
int SumArray(int ptr[],int t)
{
	int i,Sum=0;
	for(i=0;i<t;i++)
	{
		Sum=Sum+ptr[i];
	}
    return Sum;
}
