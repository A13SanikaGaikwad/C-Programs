int mystrlen(char*);
void main()
{
	int a;
	char str[10]="abc";
	a=mystrlen(str);
	printf("String Length is: %d ",a);
}
int mystrlen(char *p)
{
	int i=0;
	while(p[i]!='\0')
	{
		i++;
	}
	return i;
}
