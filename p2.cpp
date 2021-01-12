#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){     
	int m,t,s;
	scanf("%d %d %d",&m,&t,&s);
	if(s == 0)
	{
		printf("%d",m);
	}
	if(t == 0 || m == 0 )
	{
		printf("%d",0);
	}
	else
	{
			if(s >= m * t)
		{
			printf("%d",0);
		}
		if(s < m * t )
		{
			if(s % t != 0)
			{
				printf("%d",m - 1 - (s / t));
			}
			else
			{
				printf("%d",m - (s / t));
			}
		}
	}
	return 0;
}

