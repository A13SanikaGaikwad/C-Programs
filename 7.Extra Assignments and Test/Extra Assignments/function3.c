/*function Assignments
  check whether the string is pallindrome or not*/
  
#include<stdio.h>

int pallindrome(char*);
void main()
{
	char str[10];
	
	printf("Enter the string: ");
	scanf("%s",str);
    
    
	if(pallindrome(str) == 1)
	{
		printf("\n The given string is pallindrome");
	}
	else
	{
		printf("\n The given string is not pallindrome");
	}
}
int pallindrome(char *str)
{
	char rev[10];
	int i,n,length=0;
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	for(i=length-1;i>=0;i--)
	{
		rev[length-i-1]=str[i];
	}
	for(n=1,i=0;i<length;i++)
	{
		if(rev[i]!=str[i])
		n=0;
	}
	return n;
}
