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
	int zushu;cin>>zushu;//��������
	for(int j=0;j<zushu;j++)
	{
		int n;cin>>n;//ÿ�����ָ���
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int m,index; //ÿ�����е����ָ���m����result������index 
		for(m=n;m>0;m--)
		{
			index = m; 
			int result[m];//���arr���±� 
			int arr_len=sizeof(arr)/sizeof(int);
			int count = 0;
			combine(arr,count,result,index,m,arr_len);
		}
		cout<<"-->"<<endl;
	}

}
