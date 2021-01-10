#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){      //P1425
	int a,b,c,d,e,f;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(d >= b)
	{
		e = c - a;
		f = d - b;
	}
	if(d < b)
	{
		e = c - a - 1;
		f = 60 - b + d;
	}
	printf("%d %d",e,f);
	return 0;
}

