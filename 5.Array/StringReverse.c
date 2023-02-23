//String Reverse without Using strrev

char* mystrrev(char* );
void main()
{
	char String[100];
	printf(" Enter The String to reverse: ");
	scanf("%s",&String);
	int r;
	r=mystrrev(String);
	printf(" reverse String is: %s",r);
}
char* mystrrev(char* str)
{
	int start,end=0;
	char temp;
	int count;
	while(str[count]!='\0')
	count++;
	start=0;
	end=count-1;
	
	while(start<end)
	{
		temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}
	return str;
}
