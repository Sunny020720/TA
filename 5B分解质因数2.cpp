#include<stdio.h>
#include<string.h>
//5B分解质因数2 
int main(){	
	int k,x,i,count,q,div;
	int prime[1000]={0};	
	scanf("%d",&k);	
	for(int i1 = 0;i1 < k;i1++)	
	{	
	memset(prime,0,1000*sizeof(int));	
		count = 0;		
		scanf("%d",&x);		// x/div=q		
			for(div = 2; div <= x;div++)		
				{				
				if(x % div == 0 && x / div != 1)		
						{	
						 x = x / div;	
						prime[count] = div;			
						count++;			
						div = 1;		
						continue;	
									}			
				if(x == div)	
					{				
					prime[count] = div;		
						break;	}		
							}	
							
				if(count == 0)		
				{printf("%d",x);}	
				for(i = 0;i <= count && count !=0 ;i++)	
					{		
						printf("%d",prime[i]);		
							if(i == count){break;}		
								printf("*");
							}	
					printf("\n");	}
									
		return 0;
	}
