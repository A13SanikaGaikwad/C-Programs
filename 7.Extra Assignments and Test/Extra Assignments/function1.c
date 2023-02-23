//Function Assigment :Encryption and Decryption

#include<stdio.h>
void main()
{
	int i,ch,a;
	char str[15];
	printf("\nEnter a string:\t");
	scanf("%s",str);
	printf("\nEnter Your Choice:\n");
	printf("1: Encrypt the String\n");
	printf("2: Decrypt the String\n");
	scanf("%d",&ch);
	printf("\nEnter the key for encryption or decryption that is added to ASCII value:");
    scanf("%d",&a);
	
	//using switch case statements
	switch(ch)
	{
    	case 1:
    	{
    		for(i=0;(i<15 && str[i]!='\0');i++)
		    str[i]=str[i]+a;
		    printf("\nEncrypted String:%s\n",str);
		    break;
		}
		case 2:
		{
		    for(i=0;(i<15 && str[i]!='\0');i++)
		    str[i]=str[i]-a;
		    printf("\nDecrypted String:%s\n",str);
		    break;
		}
		default:
			printf("\nError:Your Choice is invalid\n");
	}	
}
