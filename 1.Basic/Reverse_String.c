//Reverse a string

#include<stdio.h>
#include<string.h>
void Reverse(char*);
void main() {
	char Sentence[20];
	printf("Enter a Sentence: ");
	gets(Sentence);
	printf("String After Reversing:\n");
	Reverse(Sentence);
}
void Reverse(char *S) {
	if(*S) {
		Reverse(S+1);
		printf("%c",*S);
	}
}
