#include<stdio.h>
//短路求值   
 
int main()
{
	int a=3,b=3;
	
	(a=0)&&(b=5);//与  a=0为假，因此后面不运算 
	printf("a=%d,b=%d\n",a,b);
	
	(a=1)||(b=5);//a=1为真 
	printf("a=%d,b=%d\n",a,b);//或  a=1为真，so后面不算 
	return 0;
}
