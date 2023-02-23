//min in array

void main()
{
	int b[5],i;
	b[0]=22;
	b[1]=40;
	b[2]=51;
	b[3]=8;
	b[4]=15;
	printf("Array: %d %d %d %d %d",b[0],b[1],b[2],b[3],b[4]);
	int min=b[0];
	for(i=0;i<5;i++)
	{
		if(b[i]<min)
		min=b[i];
	}
	printf("\nMin: %d",min);
}
