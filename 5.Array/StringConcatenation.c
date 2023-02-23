//String Concatenation Without Using strcat

char* mystrcat(char* ,char* );
void main()
{
	char str1[100],str2[100];
	printf("\n First String: ");
	scanf("%s",&str1);
	printf("\n Second String: ");
	scanf("%s",&str2);
	
	int Str;
	Str = mystrcat(str1,str2);
	printf("\n Concatenated string: %s",Str);
}
char* mystrcat(char* Str1,char* Str2)
{
	int i=0,j=0;
	
	while(Str1[i]!='\0')
	i++;
	while(Str2[j]!='\0')
	{
		Str1[i]=Str2[j];
		j++;
		i++;
	}
	Str1[i]='\0';
	
	return Str1;
}
