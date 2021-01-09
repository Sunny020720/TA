//数字显示
#include<iostream>
#include<string>
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
		cout<<"  "<<endl;break; 
	case 1:
	
		cout<<"    *";
		
		cout<<"  "<<endl;break;
	case 2:
		if(j==0||j==3||j==6){cout<<"*****" ;
		}
		else if(j==1||j==2){cout<<"    *";
		}
		else{cout<<"*    ";
		}
		cout<<"  "<<endl;break; 
	case 3:
		if(j==0||j==3||j==6){cout<<"*****" ;
		}
		else{cout<<"    *";
		}
		cout<<"  "<<endl;break; 
	case 4:
		if(j==0||j==1||j==2){cout<<"*   *" ;
		}
		else if(j==3){cout<<"*****";
		}
		else{cout<<"    *";
		}
		cout<<"  "<<endl;break; 
	case 5:
		if(j==0||j==3||j==6){cout<<"*****" ;
		}
		else if(j==1||j==2){cout<<"*    ";
		}
		else{cout<<"    *";
		}
		cout<<"  "<<endl;break; 
	case 6:
		if(j==0||j==3||j==6){cout<<"*****" ;
		}
		else if(j==1||j==2){cout<<"*    ";
		}
		else{cout<<"*   *";
		}
		cout<<"  "<<endl;break; 
	case 7:
		if(j==0){cout<<"*****" ;
		}
		else{cout<<"    *";
		}
		cout<<"  "<<endl;break; 
	case 8:
		if(j==0||j==3||j==6){cout<<"*****" ;
		}
		else{cout<<"*   *";
		}
		cout<<"  "<<endl;break; 
	case 9:
		if(j==0||j==3||j==6){cout<<"*****" ;
		}
		else if(j==1||j==2){cout<<"*   *";
		}
		else{cout<<"    *";
		}
		cout<<"  "<<endl;break; 
	}		
}


int main()
{
	int k;cin>>k;
	int i,j,q;
	for(i=0;i<k;i++)
	{
		string a;getline(cin,a);
		int len=a.length();
		stoi(a);
		cout<<a<<":"<<endl; 
		for(j=0;j<7;j++)//排数 
		{
			for(q=0;q<len;q++)//数字 
			{
				print(j,a[q]);
			}
		}
	}
 } 