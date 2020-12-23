#include<iostream>
using namespace std;
int main()
{
	int T;cin>>T;
	for(int i =0;i<T;i++)
	{
	int m,n;int a,b,c;
	cin>>m>>n;
	int count=0;int result[900];int p=0;
	for(int j=m;j<=n;j++)
	{
		a=j%10;b=(j/10)%10;c=j/100;
		if(j==a*a*a+b*b*b+c*c*c){
			count++;result[p]=j;p++;
		
		}
	}
	if(count==0){cout<<"-1"<<endl;
	}
	else{
		for(int m=0;m<count;m++)
		{
			cout<<result[m]<<" ";
		}
		cout<<endl;
	}
	}
	
	
}
