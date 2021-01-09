//A查找字符串
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;cin>>n;getchar();
	
	for(int i=0;i<n;i++)
	{
	  char ch[100]={0};
	  int q=0,p=0;
	  while((ch[q]=getchar())!='\n')
	  {
	  	q++;
	  }
	  if(ch[p]=='A')//第一个为A          
	  {		p++;
	  	while(ch[p]=='A')
	  	{
	  		p++;
		  }
	  if(ch[p]=='S'&&ch[p+1]=='C'&&ch[p+2]=='U')
		{
			p+=3;
			while(ch[p]=='A') {p++;
			}
			if(ch[p]=='\n'){
				cout<<"YES"<<endl;continue;}
				else{cout<<"NO"<<endl;continue;
				}
			}
		else{cout<<"NO"<<endl;continue;
		} 
		}
	  else if(ch[p]=='S'&&ch[p+1]=='C'&&ch[p+2]=='U'&&ch[p+3]=='\n')//
	  {
	  	cout<<"YES"<<endl;continue;
	  }	  
	  else{
	  	cout<<"NO"<<endl;
	  }
	}
	return 0;
}
