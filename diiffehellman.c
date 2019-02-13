#include<stdio.h>
#include <math.h>
#include <stdint.h>
void main()
{
	int q=11; //prime number is must
	int alpha; 
	int x,y=1; 
	uint8_t table[q-1];

	//finding alpha
	for (int i = 2; i < (q); i++)
	{
		x=i;
		for(int j=2;j<q;j++)
		{
			x=(x*y)%q;
			if (table[x]==true)
			{
				continue;
			}
			else
			{
				table[x]=true;
				y=x;
			}
		}
		if(j==q)
		{
			alpha = i;
			break;
		}
	}



}