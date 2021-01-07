//最多的单词
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
    char ch;
    char eng[100][20]={0};
    int n=0,p=0;
    int flag=0;//是否已经有其他字符
    while((ch=getchar())!=EOF)
    {
        if(ch>='A'&&ch<='Z')
        {flag=0;
            ch+='a'-'A'; eng[n][p]=ch;p++;
        }
       else if(ch>='a'&&ch<='z')
       {flag=0;
           eng[n][p]=ch;p++;
       }
       else if(flag==0)
        {
            p=0;n++;flag=1;continue;
        }
    }

    int count[n];
    for(int i=0;i<n;i++)
    {
        count[i]=1;
        for(int j=0;j<n;j++)
        {
            if(i==j){continue;}

            if(strcmp(eng[i],eng[j])==0)
            {count[i]++;}
        }   
    }
    //最多次数
    int MAX=0;int maxp=0;
    for(int i=0;i<n;i++)
    {
        if(count[i]>MAX){
            MAX=count[i];maxp=i;
        }
       else if(count[i]==MAX)
        {
            if(eng[i][0]>eng[maxp][0])
            {
                maxp=i;
            }
        }
    }
    cout<<eng[maxp]<<" "<<MAX<<endl;
    system("pause");
}