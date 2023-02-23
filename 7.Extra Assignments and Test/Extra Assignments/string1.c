/*String Assignments
1.Find no of vowel,consonants & Digits in the given string*/

#include<stdio.h>
void main()
{
	char string[70];
	int vowel=0,consonant=0,digit=0;
	printf("Enter any String: \n");
	scanf("%s",string);
	
	int i;
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||
		   string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
		{
		   	vowel=vowel+1;
		}
		else if(string[i]=='0'||string[i]=='1'||string[i]=='2'||string[i]=='3'||string[i]=='4'||
		        string[i]=='5'||string[i]=='6'||string[i]=='7'||string[i]=='8'||string[i]=='9')
		{
		    digit=digit+1;	
		}
		
		else 
		{
			consonant=consonant+1;
		}
	}
		printf("In this string the Vowels are %d, Consonants are %d, Digits are %d.",vowel,consonant,digit);	
	
}
