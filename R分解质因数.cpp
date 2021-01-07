#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int k;cin>>k;
    for(int i;i<k;i++)
    {
        int p;cin>>p;
        while(p!=1)
        {
            for(int j=2;j<=p;j++)
            {
                while(p%j==0)
                {
                    cout<<j;p/=j;
                    if(p!=1){cout<<"*";}
                    }  
            }
        }
        cout<<endl;
    }
}