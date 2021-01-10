#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  int m;cin>>m;getchar();
  int num[m];char ch[m];
  for(int i=0;i<m;i++)
  {
      scanf("%d%c",&num[i],&ch[i]);
    //   cout<<num[i]<<" "<<ch[i]<<endl;
  }
  int up=0,down=0;
  for(int i=0;i<m;i++)//高度
  {
      if(num[i]>up)up=num[i];
      if(num[i]<down)down=num[i];
  }
   int row=up-down+1;
   char print[row][2*m-1];

  
   int p=0;//列
   for(int i=0;i<row;i++)//清零
{
    for(int j=0;j<2*m-1;j++)
    {
        print[i][j]=' ';
    }
}

   for(int j=0;j<m;j++)
   {
       if(num[j]>=0)//正数
    {
       int i=0;
       for(i=0;i<up-num[j];i++)
       {print[i][p]=' ';} 
       if(ch[j]!=' '&&ch[j]!='\n')
       {
           for(;i<up;i++)
         {
           print[i][p]=ch[j];
        }
       }
       else{
           for(;i<up;i++)
            {
           print[i][p]='+';
            }
        }
       }
     else if(num[j]<0)//负数
     {
        int i=0;
       for(i=0;i<up;i++)
       {print[i][p]=' ';} //上方全部清零
       
       if(ch[j]!=' '&&ch[j]!='\n')
       {
           for(i=up+1;i<up+1-num[j];i++)
        {
           print[i][p]=ch[j];
        }
       }
       else
       {
           for(i=up+1;i<up+1-num[j];i++)
        {
           print[i][p]='+';
        }
        }
        for(;i<row;i++)
        {
            print[i][p]=' ';
        }
       
        
     }
        p+=2;
   }


 for(int i=0;i<2*m-1;i++)//-----
   { print[up][i]='-';}

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<2*m-1;j++)
        {
            cout<<print[i][j];
        }
        cout<<endl;
    }


  system("pause");
}