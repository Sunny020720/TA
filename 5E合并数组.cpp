//5E合并有序数组
#include<iostream>
#include<algorithm>
using namespace std;

void combine(int m,int n,int a[],int b[])
 //结合并排序 
{
	int x=m+n;
	int c[x];int i; 
	for(i=0;i<m;i++)
	{
	c[i]=a[i];	
	}
	int q=0;
	for(;i<x;i++)
	{
		c[i]=b[q];q++;
	}
	sort(c,c+x);
	for(i=0;i<x;i++)
	{cout<<c[i]<<" ";
	}
}
int main()
{
	int m, n;
	int j=0;
	cin>>m>>n;
	int a[m];int b[n];
	for(j=0;j<m;j++){cin>>a[j];
	}getchar();
	for(j=0;j<n;j++){cin>>b[j];
	}
	combine(m,n,a,b);
	
 } 
