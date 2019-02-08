#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int key1=7,key2=5;
	int t,i,j,k,c,dkey;
	char plaintext[20],cipher[20],decrypt[20];
	printf("Enter a string having only capital letters:");
	gets(plaintext);
	
	for(i=0;i<strlen(plaintext);i++)
	{
		t=((((int)plaintext[i]-97)*key1))%26;
		c=(t+key2)%26;
		cipher[i]=(char)(c+97);
	}
	puts(cipher);
	
	for(j=1;j<26;j++)
	{
		if(((j*key1) % 26) == 1){
			dkey = j;
		}
	}
	
	for(k=0;k<strlen(cipher);k++)
	{
		t=((int)(cipher[i])-key2)%26;
		c=(t*dkey)%26;
		decrypt[k]=(char)(c+97);
	}
	puts(decrypt);
	
}