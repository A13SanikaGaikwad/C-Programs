int mystrlen(char*);
void main()
{
	int a;
	char arr[10]="abc";
	a=mystrlen(arr);
	printf("String Length is: %d ",a);
}
int mystrlen(char *a)
{
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	return i;
}
