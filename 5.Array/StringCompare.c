//String Compare Without Using strcmp

int mystrcmp(char* ,char* );
void main()
{
	char String1[100],String2[100];
	printf("\n Please Enter the First String: ");
	scanf("%s",&String1);
	printf("\n Please Enter the Second String: ");
	scanf("%s",&String2);
	
	int cmp;
	cmp=mystrcmp(String1,String2);
	if(cmp == 0)
	{
	    printf("\n Str1 is less than Str2");
	}
	else if(cmp == 1)
	{
		printf("\n Str1 is more than Str2");
	}
	else
	{
		printf("\n Str1 is equal to Str2");
	}	
}
int mystrcmp(char* Str1,char* Str2)
{
	int i,flag=0;
	for(i=0;Str1[i]==Str2[i]&&Str1[i]=='\0';i++);

	if(Str1[i]<Str2[i])
	{
	    flag=0;
	}
	else if(Str1[i]>Str2[i])
	{
		flag=1;
	}
	else
	{
	    flag=2;
	}
	return flag;	
}
