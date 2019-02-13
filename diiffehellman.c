#include<stdio.h>
#include <math.h>
#include <stdint.h>
void main()
{
	int q=11; //prime number is must
	int alpha; 
	int x,y=1;
	int i,j,k; 
	uint8_t table[q-1];

	//finding alpha
	for (i = 2; i < (q); i++)
	{
		x=i;
		for(j=2;j<q;j++)
		{
			x=(x*y)%q;
			if (table[x]==1)
			{
				continue;
			}
			else
			{
				table[x]=1;
				y=x;
			}
		}
		for(k=0;k<q;k++)
		{
			table[k]=0;
		}
		if(j==q)
		{
			alpha = i;
			break;
		}
	}
	printf("Alpha:%d\n",alpha );
}