#include<stdio.h>
int main(){
	int a,b,n1,n2;
	n2 = 1;
	a = 0;
	for(n1 = 0;n1 < 9; n1++){
		b = 1;
		a++ ; 
		for(;a <= n2 && b <= n2 ;){
			if(a >= b && a < n2){
				printf("%d*%d=%d ",a,b,a*b);
				a++;
			}
			if(a >= n2 && b <= n2){
				printf("%d*%d=%d ",a,b,a*b);
				b++;}	
		}
		n2 = n2 + 1;
		if (n1 !=8){
		
		printf(" \n");}
	} 
	
	return 0;
}
