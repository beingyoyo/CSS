#include<stdio.h>
#include <math.h>
#include <stdint.h>
void main()
{
	int q; //prime number is must
	int alpha; 
	int x,y=1;
	int i,j,k; 
	uint8_t table[q];

	printf("Enter a prime number:");
	scanf("%d",&q);

	//finding alpha
	for (i = 2; i < (q); i++)
	{
		x=1;
		for(k=0;k<q;k++)
		{
			table[k]=0;
		}
		for(j=2;j<q;j++)
		{
			x=(y*i)%q;
			if (table[x]==1)
			{
				goto a;
			}
			else
			{
				table[x]=1;
				y=x;
			}
		}
		
		if(j==q)
		{
			alpha = i;
			break;
		}
		a:continue;
	}
	printf("Alpha:%d\n",alpha );
}