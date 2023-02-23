/*write a program to create an array of integers and and perform following operations on that array like
Finding the sum,average,maximum and minimum number in that array.Accept the numbers of the array from user*/

void sum(int[],int);
void average(int[],int);
void maximum(int[],int);
void minimum(int[],int);
void main()
{
	int size;
	printf(" Please Enter the Array Size: ");
	scanf("%d",&size);
	
	int arr[size],i;
	printf("\n Enter the Array Elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	sum(arr,size);
	average(arr,size);
	maximum(arr,size);
	minimum(arr,size);
}
void sum(int arr[],int S)
{
	int i,sum=0;
	for(i=0;i<S;i++)
	{
		sum=sum+arr[i];
	}
	printf("\nsum is %d",sum);
}
void average(int arr[],int S)
{
	int i,sum=0;
	float average=0;
	for(i=0;i<S;i++)
	{ 
	    sum=sum+arr[i];
	}
	average=(float)sum/S;
	printf("\nAverage is %f",average);
}
void maximum(int arr[],int S)
{
	int i,max=arr[0];
	for(i=0;i<S;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	printf("\nMaximum is %d",max);
}
void minimum(int arr[],int S)
{
	int i,min=arr[0];
	for(i=0;i<S;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	printf("\nMinimum is %d",min);
}


