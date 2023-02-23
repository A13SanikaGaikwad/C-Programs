/* 1.write a program to perform the following operations on string(using user defined functions)
a.length of string
b.compare two strings
c.copy one string into other
d.join two strings into one
e.reverse the given string
f.check is the string is present in another string
g.convert the given string into uppercase and lowercase
*/

#include<stdio.h>
void main()
{
	int choice;
	printf("Enter Your Choice\n1.length of string\n2.compare two strings\n3.copy one string into other\n4.join two strings into one\n5.reverse the given string\n6.check is the string is present in another string\n7.convert the given string into uppercase and lowercase\n\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		char str[50];
		printf("Enter String for Finding Length Of String:\n");
		scanf("%s",str);
		int i;
		for(i=0;str[i]!='\0';++i);
		printf("Length of the String: %d\n",i);
	}
	if(choice==2)
	{
		char str1[20];
		char str2[20];
		int value;
		printf("Enter the First String:");
		scanf("%s",str1);
		printf("Enter the Second String:");
		scanf("%s",str2);
		value=strcmp(str1,str2);
		if(value==0)
		{
			printf("Strings are Same");
		}
		else
		{
			printf("Strings are not Same");
		}
		
	}
	if(choice==3)
	{
		char str1[20];
		char str2[20];
		printf("Enter the First String:");
		scanf("%s",str1);
		printf("First String is %s\n",str1);
	    strcpy(str2,str1);
	    printf("Second String is %s\n",str2);
	}
	if(choice==4)
	{
		char str1[20];
		char str2[20];
		printf("Enter the First String:");
		scanf("%s",str1);
		printf("Enter the Second String:");
		scanf("%s",str2);
		int i,j;
		for(i=0;str1[i]!='\0';i++);
		for(j=0;str2[j]!='\0';j++)
		{
			str1[i]=str2[j];
			i++;
		}
		str1[i]='\0';
		printf("After Joining Two Strings: %s",str1);
	}
	if(choice==5)
	{
		char str[40];
		printf("Enter a String to be reversed:\n");
		scanf("%s",str);
		printf("After the Reverse of String: %s\n",strrev(str));
	}
	if(choice==6)
	{
		char str[50],Astr[10];
		int count1=0,count2=0,i,j,flag;
		printf("Enter a String:\n");
		scanf("%s",str);
		printf("Enter a another string (substring):\n");
		scanf("%s",Astr);
		
		while(str[count1] != '\0')
		     count1++;
		while(Astr[count2] != '\0')
		     count2++;
		for(i=0;i<=count1-count2;i++)
		{
			for(j=i;j<i+count2;j++)
			{
				flag=1;
				if(str[j]!=Astr[j-i])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			break;
		}
		if(flag == 1)
		   printf("Search Succesful");
		else
		   printf("Search Unsuccesful");	
	}
	if(choice==7)
	{
		char strUpr[25],strLwr[25];
		int i;
		printf("Enter the String For Uppercase:");
		scanf("%s",strUpr);
		for(i=0;strUpr[i]!='\0';++i)
		{
			if(strUpr[i]>='a'&&strUpr[i]<='z')
			strUpr[i]=strUpr[i]-32;
		}
		printf("Uppercase String is:%s\n",strUpr);
		
		printf("Enter the String For Lowercase:");
		scanf("%s",strLwr);
		for(i=0;strLwr[i]!='\0';++i)
		{
			if(strLwr[i]>='A'&&strLwr[i]<='Z')
			strLwr[i]=strLwr[i]+32;
		}
		printf("Lowercase String is:%s",strLwr);
	}
}
