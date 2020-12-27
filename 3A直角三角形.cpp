#include<iostream>
using namespace std;
int main()
{
	 int n,a,b,c; cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
   		if (a <= 0 || b <= 0 || c <= 0 || b + c <= a) //三角形的基本判定方法
		{
		printf("No\n");
		return 0;
		}
		else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
		{
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
		
	}
}
