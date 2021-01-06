#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n;cin>>n;
    if(n%2==1||n<7){cout<<"ERROR\n";system("pause"); return 0;}
    int i,j;
    for(i=1;i<n/2+1;i+=2)
    {
        int j=n-i;
        //判断质数
        int flag=1;
        for(int p=2;p<i;p++)
        {
            if(i%p==0)
            {flag=0;break;}
        }
        for(int p=2;p<j;p++)
        {
            if(j%p==0)
            {flag=0;break;}
        }
        if(flag){
            cout<<i<<" "<<j<<endl;
        }
        system("pause");
    }
    return 0;
}