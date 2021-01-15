#include<stdio.h>
int main()
{
	int i,j,k,x = 0,n,i1,times;
	scanf("%d",&n);
	for(i1 = 0;i1 < n;i1++)
	{
		scanf("%d",&times);
		for(i = 0;i <= 3;i++)
		{
			for(j = 0;j <= 3;j++)
			{
				for(k = 0;k <= 6;k++)
				{
					if(i + j + k == times)
					x++;
				}
			}
		}
	}
	printf("%d\n",x);
}
