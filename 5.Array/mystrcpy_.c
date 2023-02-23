char* mystrcpy(char*,char*);
void main()
{
	char arr[5]="abc";
	char brr[5];
	mystrcpy(brr,arr);
	printf("%s",brr);
}
char* mystrcpy(char* brr,char* arr)
{
	int i=0;
	while(arr[i]!='\0')
	{
		brr[i]=arr[i];
		i++;
	}
	brr[i]='\0';
	return brr;
}
