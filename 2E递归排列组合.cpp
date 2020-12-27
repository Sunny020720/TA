#include<iostream>
using namespace std;
void combine(int *arr,int start,int *result,int index,int m,int arr_len)
{
	int count = 0;
	for(count =start;count<arr_len-index+1;count++)
	{
		result[index-1]=count;
		if(index-1==0)
			{
			int j;
			cout<<"-->";
		for(j=m-1;j>=0;j--)
			cout<<arr[result[j]]<<" "; 
			cout<<endl;
			}
		else
		combine(arr,count+1,result,index-1,m,arr_len);
	}
}
int main()
{  
	int zushu;cin>>zushu;//数据组数
	for(int j=0;j<zushu;j++)
	{
		int n;cin>>n;//每组数字个数
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int m,index; //每个排列的数字个数m数组result的索引index 
		for(m=n;m>0;m--)
		{
			index = m; 
			int result[m];//存放arr的下标 
			int arr_len=sizeof(arr)/sizeof(int);
			int count = 0;
			combine(arr,count,result,index,m,arr_len);
		}
		cout<<"-->"<<endl;
	}

}
