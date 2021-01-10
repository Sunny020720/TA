#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){   //P5708
	float a,b,c,p;
	scanf("%f %f %f",&a,&b,&c);
	p = (a + b + c)/ 2.0;
	double S =sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.1f",S);
	return 0;
}



