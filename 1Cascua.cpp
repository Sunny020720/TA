//判断字符串满足要求输出YES 否则NO 
#include<iostream>
#include<string.h>

int main()
{
	int n,i,j;
	std::cin>>n; 
	getchar();char a[n][100];
	for(i=0;i<n;i++)
	{
		for(j=0;j<100;j++)
		{
		a[i][j]=0;
		}
	}

	for(i = 0;i < n;i++)
	{
		scanf("%s",a[i]);
		
		int p=0;int count1=0,count2=0;
		
		while(a[i][p] == 'A'){p++;count1++;}
		
		if(a[i][p] == 'S' && a[i][p+1] == 'C' && a[i][p+2] == 'U')
         {
         	p+=3;
		 }
		else{
			printf("NO\n");continue;
		}
		
		if(a[i][p] == 0)
		{
			printf("YES\n");continue;
		}
		
		while(a[i][p] == 'A'){p++;count2++;}
		
		if(a[i][p]== 0 && count1==count2)
        {
        	printf("YES\n");continue;
		}
        else
        {
         printf("NO\n");
        }
		
	}
	
	return 0;
 } 
