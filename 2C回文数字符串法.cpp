//C������
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,j,n,p,q=0;
	cin>>n;getchar();
	int flag[n];
	for(p=0;p<n;p++)
	{	
	    string num;
		cin>>num;
		int length1 = num.length();
		int a[length1];
		//���Ƶ������� 
		for(i = 0;i < length1;i++)
		{
			a[i] = num[i];
		}
		
		//λ��Ϊż�� 
		if(length1%2==0)
		{
			for(i = 0;i < length1/2;i++) 
			{
				if(a[i]!=a[length1-1-i])
				{
					flag[q]=0;q+=1;
					break;
				}
			}
		
			if (i==length1/2)
			{
				flag[q]=1;q+=1;
			}
		}
		//λ��Ϊ����
		else
		{
			for(i = 0;i < (length1-1)/2;i++) 
			{
				if(a[i]!=a[length1-1-i])
				{
				flag[q]=0;q+=1;
				break;
				}
			}
		
			if (i==(length1-1)/2)
			{
				flag[q] = 1;q+=1;
			}	
		} 	
		
	}
	
	for(p=0;p<n;p++)
	{
		if(flag[p]==1){
			cout<<"Yes\n";
		}
		else if(flag[p]==0){
			cout<<"No\n";
		}
	}
	
 } 
