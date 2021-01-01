// L计算平均值
#include<iostream>
#include<cstring>
#include<string>
#include<stdlib.h>
using namespace std;
int main() 
{
	int N;cin>>N;getchar();
	double sum=0.00,div=0.00;
	char a[N][10]={0};
	char ch;int p=0,q=0;
	int count=N;
    while((ch=getchar())!='\n')
    {
    	if(ch==' '){p++;q=0;continue;
		}
    	a[p][q]=ch;q++;
	}
	for(int j=0;j<N;j++)
	{
		if(strcmp(a[j],"n/a")==0){
			count--;
		}
		else {
			sum += atoi(a[j]);
		}
	 } 
	if(count==0)
	{
		printf("n/a\n");return 0;
	}
	div=sum/count;
	printf("%.2lf\n",div);
	return 0;
}
