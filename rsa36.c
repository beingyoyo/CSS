#include<stdio.h>
#include<math.h>
#include<string.h>
int modInverse(int a, int m) 
{ 
    a = a%m; 
    for(int x=1; x<m; x++)
    { 
       if((a*x) % m == 1)
       {
       	return x;
       } 
    }
} 
void main()
{
	//Declaring variables
	int p=257,q=263,plaintext,encryption[8],decryption[8];
	double e,d,n,funcn;
	double P,D;
	char ptext[8];
	
	printf("Enter plaintext:\n");
	gets(ptext);
	n=p*q;
	printf("n:%d\n",n);
	funcn=((p-1)*(q-1)); //Phi of n
	printf("Phi of n:%d\n",funcn);

	// Calculating the public key
	for (int i = 2; i < (int)funcn; i++)
	{
		if((int)funcn%i!=0)
		{
			printf("Public Key:%d\n",i);
			e=i;
			break;
		}
	}

	// Calculating Private Key
	d=modInverse(e,(int)funcn);
	printf("Private key:%d\n",d);

	for (int i = 0; i < strlen(ptext); i++)
	{
		plaintext=(int)(ptext[i]);

		//Encryption
		P=(pow((double)plaintext,e));
		double pe=(int)(P)%(int)n;
		encryption[i]=(int)pe;
		printf("Encrypted value:%d\n",encryption[i]);

		//Decryption
		D=(pow((double)encryption[i],(double)d));
		printf("D:%d\n",D);
		double de=(int)(D)%(int)n;
		decryption[i]=(int)de;
		printf("Decrypted value:%d\n",decryption[i]);
		printf("\n");
	}
}