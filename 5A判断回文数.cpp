//A�жϻ�����
#include<iostream>
using namespace std; 
int main()
{
	int n,i,j;cin>>n;
	for(i=0;i<n;i++){
		int num;cin>>num;
		//�����������������
		int x=0;int s=num;
		while(s>0)
		{
			x=x*10+s%10;
			s=s/10;
		 } 
//		 cout<<x<<endl; 
		 if(x==num){
		 	cout<<"yes"<<endl;
		 }
		 else{cout<<"no"<<endl;
		 }
	}
}
