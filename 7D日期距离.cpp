#include<stdlib.h>
#include<iostream>
using namespace std;

int print1(int y,int m,int d)
{
    switch (m)
    {
    case 1:
        cout<<"January "<<d<<", 20"<<y<<endl;
        break;
    case 2:
        cout<<"February "<<d<<", 20"<<y<<endl;
        break;
    case 3:
        cout<<"March "<<d<<", 20"<<y<<endl;
        break;
    case 4:
        cout<<"April "<<d<<", 20"<<y<<endl;
        break;
    case 5:
        cout<<"May "<<d<<", 20"<<y<<endl;
        break;
    case 6:
        cout<<"June "<<d<<", 20"<<y<<endl;
        break;
    case 7:
        cout<<"July "<<d<<", 20"<<y<<endl;
        break;
    case 8:
        cout<<"August "<<d<<", 20"<<y<<endl;
        break;
    case 9:
        cout<<"September "<<d<<", 20"<<y<<endl;
        break;
    case 10:
        cout<<"October "<<d<<", 20"<<y<<endl;
        break;
    case 11:
        cout<<"November "<<d<<", 20"<<y<<endl;
        break;
    case 12:
        cout<<"December "<<d<<", 20"<<y<<endl;
        break;
    default:
        break;
    }
    return 0;
}

int year(int y)
{
    return (y - 1) / 4 * 1461 + ((y - 1) % 4) * 365;
}

int month(int a, int y)
{
   int value;
   value = 0;
   switch (a)
   {
      case 12: value = value + 30;
      case 11: value = value + 31;
      case 10: value = value + 30;
      case 9: value = value + 31;
      case 8: value = value + 31;
      case 7: value = value + 30;
      case 6: value = value + 31;
      case 5: value = value + 30;
      case 4: value = value + 31;
      case 3: value = value + 28;
      case 2: value = value + 31;
      case 1: value = value + 0;
   }

   if (y % 4 == 0)
      value++;
   return value;
}

int main()
{
    
    int num1,num2,num3;
    int distance=0;
    cin>>num1;getchar();
    cin>>num2;getchar();
    cin>>num3;
    // cout<<num1<<" "<<num2<<" "<<num3<<endl;
    int flag1=1,flag2=1,flag=0;

    if(num1>12) flag1=0;
    if(num2>12) flag2=0;
    if(num3>31) flag2=0;
    if(num3==30&&(num2==1||num2==3||num2==5||num2==7||num2==8||num2==10||num2==12))
        flag2=0;
    if(num3==29&&num2!=2) flag2=0;
    if(num3==29&& ((num1%4!=0)||(num1%100==0&&num1%4==0&&num1%400!=0)))
    flag2=0;
    // cout<<flag<<endl;
    if(flag1==1&&flag2==0)flag=1;
    if(flag1==0&&flag2==1)flag=2;
    if(flag1==1&&flag2==1)flag=3;
    int dis1,dis2;
    switch (flag)
    {
    case 1:
        print1(num3,num1,num2);
        break;
    case 2:
        print1(num1,num2,num3);
        break;
    case 3:
        dis1=year(num3)+month(num1,num3)+num2;
        dis2=year(num1)+month(num2,num1)+num3;
        if(dis1>dis2)distance=dis1-dis2;
        else{distance=dis2-dis1;}
        cout<<distance<<endl;
        break;
    }

    system("pause");
    return 0;
}