#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()    
{
	long long int n;
	scanf("%lld",&n);
	if(n <= 3)
	{
		printf("0");
	}
	else
	{
		long long int t = n*(n-1)/2*(n-2)/3*(n-3)/4;
		printf("%lld",t);
	}
}

//------P2433-----------------
