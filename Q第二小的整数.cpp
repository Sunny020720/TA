//第二小的整数
#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    int n;cin>>n;
    int i,j;
    for(i=0;i<n;i++)
    {
        int m;cin>>m;getchar();
        int num[m];
        j=0;
            while(cin>>num[j])
            {
                // cout<<"num["<<j<<"]="<<num[j]<<endl;
                j++;
                if(cin.get()=='\n'){break;}
                
            }
       sort(num,num+m);
    //    for(j=0;j<m;j++)
    //    {cout<<num[j]<<endl;}
       
       int min[m];
       int temp=1;min[0]=1;
       for(j=1;j<m;j++)
       {
           if(num[j]==num[j-1])
           {
                min[j]=temp;
               
           }
            else{min[j]=temp+1;temp++;}
        //  cout<<"min["<<j<<"]="<<min[j]<<endl;
       }

       if (min[m-1]<2){
           cout<<"ERROR\n";continue;}
        for(j=m-1;j>=0;j--)
        {
            if(min[j]==2){cout<<num[j]<<endl;
            break;}
        }
    }system("pause");
}