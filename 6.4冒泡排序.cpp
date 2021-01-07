#include<iostream>
using namespace std;

int main2()
{
	int i ;
	int N=6;
	int a[N]={10,444,232,30,543,33};
	//外层循环控制 轮数 
	for(i = 0;i<N-i;i++)
	{
		//内层循环控制 每轮的比较次数 
		for(int c=0;c<N-i-1;c++)
		{
		
		if (a[c] > a[c+1])
		{
			int temp=a[c];
			a[c]=a[c+1];
			a[c+1]=temp;	
		}
		
	}
}
cout<<"10,444,232,30,543,33从小到大排序为：\n";
for(i=0;i<6;i++) 
{
	cout<<a[i];
	cout<<" ";
}
	return 0;
 } 
