char* mystrcpy(char*,char*);
void main()
{
	char source[5]="abc";
	char dest[5];
    printf("%s",mystrcpy(dest,source));
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
