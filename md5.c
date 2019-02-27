#include<stdio.h>
#include<stdint.h>
int bit_length(int n)
{
	int count=0;
	while(n>0)
	{
		count++;
		n=n >> 1;
	}
	return count;
}

int get_plen(int mfield_len, int lfield_len)
{
	int n=448-(mfield_len+lfield_len)%512;
	return n;
}

void main()
{
	//Reading the input
	long int message;
	int mfield_len, lfield_len, total_len, padding_len;

	printf("Enter message:");
	scanf("%ld",&message);

	//Calculating lengths
	mfield_len=bit_length(message);
	lfield_len=bit_length((uint64_t)mfield_len);

	//Calculating the padding required
	padding_len=get_plen(mfield_len, lfield_len);
	printf("Padding Length:%d\n", padding_len);
}