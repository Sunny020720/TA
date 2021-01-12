#include<stdio.h>
#include<string.h> 
int main(){
	int n,i,a,b,x,y,p[1000],q,m=0;
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d %d",&a,&b);
		y = 0; 
		for(;a >= 1;){
			x = a / b;
			y = a % b;	
			p[m]=y;
			m = m + 1;
			a = x; 
		}
		
		for(;m > 0;m--){
			printf("%d",p[m-1]);
		}
		printf("\n");
	}
	return 0;
} 
