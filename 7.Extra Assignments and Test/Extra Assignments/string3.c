/*string assignments
  Accept a sentence from user and count total no. of words and also total no.of letters in that words*/

#include<stdio.h>
void main()
{
	char str[50];
	printf("Enter a sentence : ");
	gets(str);
	int i,words,letters;
	words=1;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ' ||str[i]=='\n' ||str[i]=='\t')
		words++;
		else if(str[i]!=' ')
		letters++;
	}
	printf("\n Total no.of words: %d",words);
	printf("\n Total no.of letters in that words: %d",letters);
	printf("\n Total no.of spaces: %d",(words-1));
}
