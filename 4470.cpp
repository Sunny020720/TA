#include<iostream>
#include<stdlib.h>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
 int i,t,l,r;
 cin>>t;
    for(i = 0;i < t;i++)
    {   int count=0;
        cin>>l>>r;//������ 
        for(l;l<=r;l++)
        {	int length1=sizeof(l);int flag=0;
            char a[100]={0};
            sprintf(a,"%d",l);
//            cout<<"length1="<<length1<<"\t";
			cout<<"a="<<a<<"\t";
            for(int j = 0;j<length1-1;j++)
            {
//                cout<<"a["<<j<<"]="<<a[j]<<endl;
                if(a[j]=='5' && a[j+1]=='9')
				{
					flag = 1;cout<<"flag="<<flag<<endl;break;
				 } 
            }
            if(l % 7==0 && flag==1)
            {
               count++;
            }
        }
        cout<<"count="<<count<<endl; 
    }
    system("pause");
    return 0;  
}
