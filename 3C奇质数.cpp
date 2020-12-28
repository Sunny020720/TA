//C奇质数 
//大于6的偶数可以被分解为两个奇质数的和，求出所有解
//需要分别判断两个加数是奇数和质数，若都满足则成立。 
#include<iostream>
using namespace std;
int main()
{
	int n,num1,j;
	while(cin>>n)//num为输入数字 
	if(n<7||n%2==1){
		cout<<"ERROR\n";
	}
	else 
	{
		for(num1=2;num1<=n/2;num1++)//从0到num/2 
		{
		   int num2 =n-num1;int flag=1;
		   if(num1%2==0||num2%2==0)continue;//为偶数跳出 
		   
		   	for(j=2;j<num1;j++)//判断素数 
		   	{
		   		if(num1%j==0)
				   {flag=0;break;}//不是素数 
				}
			for(j=2;j<num2;j++)//判断素数 
		   	{
		   		if(num2%j==0)
				{flag=0;break;}//不是素数 
				}
		   if (flag==1)cout<<num1<<" "<<num2<<endl;
		 } 
	}
	return 0; 
}
