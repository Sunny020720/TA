//平方根
#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
        double num=0.00;cin>>num;
        if(num<0){cout<<"ERROR\n";}
        else{printf("%.2lf\n",sqrt(num));}
    }
    system("pause");
}