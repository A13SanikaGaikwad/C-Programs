char* mystrcpy(char*,char*);
void main()
{
	char source[5]="abc";
	char dest[5];
	mystrcpy(dest,source);
	printf("%s",dest);
}
char* mystrcpy(char* d,char* s)
{
	int i=0;
	while(s[i]!='\0')
	{
		d[i]=s[i];
		i++;
	}
	d[i]='\0';
	return d;
}
