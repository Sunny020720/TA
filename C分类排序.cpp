#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;
int main()
{
   int n;cin>>n;getchar();
   int i,k;
   for(i=0;i<n;i++)  
   {
   	int num[1000];int len=0;
   	int j=0;
	while(cin>>num[j])
   	{ 
//	   cout<<"num["<<j<<"]="<<num[j]<<endl;
		   j++;len++;  
		   if(cin.get()=='\n')break;
		}

   	int even[1000],odd[1000];
   	int p=0,q=0;
   	  //分离偶数和奇数 
	  for(k=0;k<len;k++)
	  { int temp=num[k];
	  		
	  			if(temp%2==0)
	  			{
	  				even[p]=temp;
//	  				cout<<"even["<<p<<"]="<<even[p]<<endl;
					p++;
				}
				else{
					odd[q]=temp;
//					cout<<"odd["<<q<<"]="<<odd[q]<<endl;
				q++;
				}
		  
	   } 
//	   cout<<"p="<<p<<" q="<<q<<endl; 
	   //结束后有p个偶数 q个奇数 
	   
	   //分别把奇数偶数排序
	    sort(odd,odd+q);
	    sort(even,even+p);
	    for(j=0;j<q;j++)cout<<odd[j]<<" ";
	    for(j=0;j<p;j++)cout<<even[j]<<" ";
	   cout<<endl;
	}	
	
}
