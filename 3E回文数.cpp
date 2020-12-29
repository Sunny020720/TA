//E统计回文数
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>

 
using namespace std;
int main()
{
    char str[1000]={};long long int x=0,s=0;
	long long int p,q,r=0,i,j,count=0,a[100]={0};//存放数字 64位 
	//********？？？由于数字位数不确定 所以应改为由数组存放 
	long long int hws[100]={0};//存放回文数 
	
	 //?怎么输入一段文本
	while((str[x]=getchar())!=EOF)
	     {x++;}
//	cout<<"str="<<str<<endl;
	//提取数字  长度至少为2 且不以0开头
	while(1)
	{
		while(str[r]&&(str[r]<'0'||str[r]>'9'))

		{r++;}//跳过非数字 
	
	if(str[r])
	{
		p=r;q=r+1;//p为数字开头，q寻找数字结尾 
		a[count]=str[r]-'0';
		
		while(str[q]>='0'&&str[q]<='9')
		{
			a[count] = 10*a[count]+(str[q]-'0');
			
			q++;
		}
		//cout<<"q="<<q<<endl; 
		if(str[r]==0||q==r+1)//不符合要求的数字用0覆盖掉 
		{
			a[count] = 0;
		}
		
		r = q;//新起点 
		count++;//数子个数
	}
	else break;
	}
		
//		for(i=0;i<count;i++)
//	{	cout<<"a["<<i<<"]="<<a[i]<<endl;}////////
	
	 //判断回文数  
//	cout<<"count="<<count<<endl;
//存放回文数的数组的下标 
    int n=0;
	for(i=0;i<count;i++)
	{ 
//	  cout<<"a["<<i<<"]="<<a[i]<<endl;
	
		x=0,s=a[i];//将每位上的数字逆着组合起来 
		if (a[i]==0)continue;
		while(s>0)
		{
			x=x*10+s%10;
			s=s/10;
		}
//		cout<<"x="<<x<<endl;//
			if(x==a[i]){ hws[n]=a[i];n++; } 
	
	 } 
	 
	 if(n==0){
	 	cout<<"None"<<endl;
	 	exit(0);
	 }
	 int ci[n];//统计次数 
	 for(i=0;i<n;i++)
	 {
	 	ci[i]=1;
	 }
	 //判断回文数出现次数 ////遇到0跳过 
	 for(i=0;i<n;i++)
	 {
	 	if (hws[i]==0){continue;
	 	}
	 	for(j=i+1;j<n;j++)
	 	{
	 	    if(hws[j]==0){continue;
			 } 
	 			if(hws[i]==hws[j])
	 			{
	 				ci[i]++;
	 				hws[j]=0;//将重复的数字置为0，避免重复 
//	 				cout<<"ci["<<i<<"]="<<ci[i]<<endl; ////////
				 }
			 
		 }
	  } 
	  //输出出现次数最多的回文数 
	  //找出最大次数是多少 
	  int MAX=ci[0]; int m=0;
	  for(i=0;i<n-1;i++)
	  {
	  	if(MAX<ci[i+1])
	  	{
	  	   MAX=ci[i+1];
		  }
	   } 
//	   cout<<"MAX="<<MAX<<endl;
	   int result[30]={0};
	   for(i=0;i<n;i++)
	   { 
	    if(ci[i]==MAX)
	   	{
	   		result[m]=hws[i];m++;
			} 
	   }
	   //冒泡排序
	//外层循环控制 轮数 
	for(i = 0;i<30-i;i++)
	{
		//内层循环控制 每轮的比较次数 
		for(int c=0;c<30-i-1;c++)
		{
		
		if ((result[c] > result[c+1])&&result[c]!=0&&result[c+1]!=0)
		{
			int temp=result[c];
			result[c]=result[c+1];
			result[c+1]=temp;	
		}
		
		}
	}
	for(i = 0;i<30;i++)
	{
		if(result[i]==0)break;
		cout<<result[i]<<" "<<MAX<<endl; 
	}
	cout<<endl;
	 
	  
	 
	
	return 0 ;
 } 
