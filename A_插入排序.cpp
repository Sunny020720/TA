#include<stdio.h>
int main(){
	int i, m, n,a[1000],i1,t,j;
	scanf("%d\n",&n);
	for (i1 = 0;i1 < n;i1++){
		scanf("%d",&a[i1]);
	}
	printf("%d\n",a[0]);
	for(i = 1; i < n;i++){
		t =a[i];
		j = i - 1;
		while (j >= 0 && a[j]>t){
			a[j+1] = a[j];
			a[j] = t;
			j--;
		}
		if(j != i - 1){
			a[j+1] = t;
		}
		for(i1=0;i1 <= i;i1++){
			printf("%d ",a[i1]);
		}
		printf("\n");
	}

	return 0;
} 
