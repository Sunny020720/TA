#include<stdio.h>
int main(){
	int n,x,y,i1;
	scanf("%d",&n);
	for(i1 = 0;i1 < n;i1++)
	{
		scanf("%d %d",&x,&y);
		int a = 0,b = 0,c = 0;
		if(y == x)
		{
			printf("0 0 %d",x);
		}
		if(y == 3 * x)
		{
			printf("%d 0 0",x);
		}
		if(y >= x && y <= 2 * x);
		{
			b = y - x;
			c = 2 * x - y;
			printf("0 %d %d\n",b,c);
			while(b >= 2)
			{
				b -= 2;
				a += 1;
				c += 1;
				printf("%d %d %d\n",a,b,c);
			}
		}	
	}
	return 0;
} 
