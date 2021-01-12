#include<stdio.h>
int main(){
	int T,i,M,m,n,t;
	scanf("%d",&T);
	for(i = 0; i < T; i++){
		scanf("%d %d",&m,&n);
		for(t = 1; t <= m && t <= n;t++){
			if (m % t == 0 && n % t == 0){
				M = t;
			}
		}
		
		printf("%d\n",M);
	}
	return 0;
} 
