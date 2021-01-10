#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int stair(int n){
	if(n == 1)
	{
		return 1;
	}
	if(n == 2)
	return 2;
	if(n != 1 && n != 2)
	return stair(n-2) + stair( n-1);
}
int main(){
	int m;
	scanf("%d",&m);
	printf("%d\n",stair(m));
	return 0;
}

//------P5711---------------------------------------
