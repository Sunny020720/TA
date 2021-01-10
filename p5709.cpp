#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){           
	int T;
	scanf("%d",&T);
	if(T == 1)
	{
		printf("I love Luogu!");
	}
	if(T == 2)
	{
		printf("6 4");
	}
	if(T == 3)
	{
		printf("3\n12\n2\n");
	}
	if(T == 4)
	{
		printf("%.3lf",500.000/3.000);
	}
	if(T == 5)
	{
		printf("%d",480 / 32);
	}
	if(T == 6)
	{
		
	}
	if(T == 7)
	{
		printf("110\n90\n0\n");
	}
	if(T == 8)
	{
		
	}
	if(T == 9)
	{
		printf("22");
	}
	if(T == 10)
	{
		printf("9");
	}
	if(T == 11)
	{
		
	}
	if(T == 12)
	{
		printf("13\nR");
	}
	if(T == 13)
	{
		const double pi = 3.141593;
		double a = 4.0 / 3.0;
		double answer = a * pi * (4 * 4 * 4 + 10 * 10 * 10);
		int length = pow(answer,1.0/3.0);
		printf("%d",length);
	}
	if(T == 14)
	{
		printf("50");
	}
	return 0;
}

//------P5709-------------
