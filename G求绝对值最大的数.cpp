//G求绝对值最大
#include<iostream> 
using namespace std;

int find_max(int n,int a[20])
{
	int max=a[0];int i;
	for(i=1;i<n;i++)
	{
		if(max==0){max=a[i];
		}
		else if(a[i]>0&&max>0&&a[i]>max){max=a[i];
		}
		else if(a[i]<0&&max<0&&a[i]<max){max=a[i];
		}
		else if(a[i]>0&&max<0&&a[i]>-max){max=a[i];
		}
		else if(a[i]<0&&max>0&&-a[i]>max){max=a[i];
		}
	}
	return max;
}

int main()
{
	int n;
	while(cin>>n)
	{
	int a[20];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<find_max(n,a)<<endl;;
	}
 } 
