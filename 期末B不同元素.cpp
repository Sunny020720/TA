//B��ͬ��Ԫ��
//�� 8����  -5 8 8 8 8 8 8 8 -5���Ϊ2 
//�������������ȶ� 
#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
	int a[n];
	int i,j,p=0,q=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	//��ð������
	for(i=0;i<n-i;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp; 
			}
		}
	 } 
	
	int count = 1;
	for(i=0;i<n-1;i++){
		if(a[i]!=a[i+1]){count++;
		}
			}
			cout<<count<<endl;
	
	}
	
	
	
 } 
