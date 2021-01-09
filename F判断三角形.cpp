//FÅÐ¶ÏÖ±½ÇÈý½ÇÐÎ
#include<iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	int i,j;
	for(i=0;i<n;i++)
	{
		int a,b,c;cin>>a>>b>>c;
		if(a>0&&b>0&&c>0&&a+b>c&&a*a+b*b==c*c)
		{cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	 
}
