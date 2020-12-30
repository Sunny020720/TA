//数字显示
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void print(int j,int num)
{
	switch(num)
	{
		case 0:
		if(j==0||j==6){cout<<"*****" ;
		}
		else{cout<<"*   *"; 
		}
		cout<<"  ";break; 
	case 1:
	
		cout<<"    *";
		
		cout<<"  ";break;
	case 2:
		if(j==0||j==3||j==6){cout<<"*****" ;
		}
		else if(j==1||j==2){cout<<"    *";
		}
		else{cout<<"*    ";
		}
		cout<<"  ";break; 
	case 3:
		if(j==0||j==3||j==6){cout<<"*****" ;
		}
		else{cout<<"    *";
		}
		cout<<"  ";break; 
	case 4:
		if(j==0||j==1||j==2){cout<<"*   *" ;
		}
		else if(j==3){cout<<"*****";
		}
		else{cout<<"    *";
		}
		cout<<"  ";break; 
	case 5:
		if(j==0||j==3||j==6){cout<<"*****" ;
		}
		else if(j==1||j==2){cout<<"*    ";
		}
		else{cout<<"    *";
		}
		cout<<"  ";break; 
	case 6:
		if(j==0||j==3||j==6){cout<<"*****" ;
		}
		else if(j==1||j==2){cout<<"*    ";
		}
		else{cout<<"*   *";
		}
		cout<<"  ";break; 
	case 7:
		if(j==0){cout<<"*****" ;
		}
		else{cout<<"    *";
		}
		cout<<"  ";break; 
	case 8:
		if(j==0||j==3||j==6){cout<<"*****" ;
		}
		else{cout<<"*   *";
		}
		cout<<"  ";break; 
	case 9:
		if(j==0||j==3||j==6){cout<<"*****" ;
		}
		else if(j==1||j==2){cout<<"*   *";
		}
		else{cout<<"    *";
		}
		cout<<"  ";break; 
	}	
	
}


int main()
{
	int k;cin>>k;getchar(); 
	int i,j,q,p;
	for(i=0;i<k;i++)
	{
		string a;getline(cin,a);
		int len=a.length();
		cout<<a<<":"<<endl; 
		int temp = stoi(a);//转数字 
		int b[len];
		for(q=len-1;q>=0;q--)
		{
		
			b[q]=temp%10;
//			cout<<"b["<<q<<"]="<<b[q]<<endl;
			temp=temp/10;
		}
		
		for(j=0;j<7;j++)//排数 
		{
			for(q=0;q<len;q++)//数字 
			{
			 print(j,b[q]);
			}
			cout<<endl;	
		}
	}
 } 
