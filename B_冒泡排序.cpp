#include<stdio.h>
int main(){
	int n,i1,i,j,k,t,a[1000],x;
	scanf("%d\n",&n);
	for (i1 = 0;i1 < n;i1++){
		scanf("%d",&a[i1]);
	}
	for(i = 0;i < n - 1;i++){
		for(j = 0;j <n - i;j++){
			
			if(a[j]>a[j+1] && j <n - 1){
				k = j + 1;
				t = a[k];
				a[k] = a[j];
				a[j] = t;
			}
		}
		for(x = 0;x < n;x++){
			printf("%d ",a[x]);
		}
		printf("\n");
	} 
	return 0;
} 
