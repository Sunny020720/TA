
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){     //P5706 
	int n;
	float t;
	scanf("%f %d",&t,&n);
	float aver =t / n;
	printf("%.3lf\n%d",aver,2 * n);
	return 0;
}
