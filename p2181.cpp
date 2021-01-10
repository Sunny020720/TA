#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){             
	int n,t,i,a[101]={0};
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	t = a[0];
	for(i = 0;i < n - 1;i++)
	{
		if(t >= a[i])
		{
			t = a[i];
		}
	}
	printf("%d",t);
	return 0;
} 

//------P2181--------------------------------------------------------------------------

