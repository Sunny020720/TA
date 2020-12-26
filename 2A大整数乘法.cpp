//A大整数之积
#include<iostream>
#include<string>
#include<cstdio>
 
using namespace std;
#define MAX 1010  
 
 
int main()
{     
    string std1, std2;
	
    while (cin>>std1>>std2)
	{
		
		int length1 = std1.length();
		int length2 = std2.length();
		int a[MAX] = {0};
		int b[MAX] = {0};
		int result[2 * MAX] = {0};
		int i = 0, j = 0;
		//将字符串转移到数组中，以方便计算 ，注意是倒叙存储
		//即字符串123存为321，为的是将低位放在前面方便计算 
		for(i = length1 - 1, j = 0; i >= 0; i--, j++)
		{
		a[j] = std1[i] - '0';
		}
		for(i = length2 - 1, j = 0; i >= 0; i--, j++)
		{
		b[j] = std2[i] - '0';
		}
		//将结果储存在 resullt中，result[i + j] = a[i] * b[j]是关键算法 
		for(i = 0; i < length1; i++)
		{
		for(j = 0; j < length2; j++)
		{
		result[i + j] += a[i] * b[j];
		}
		}
		 
		//从低位到高位进行进位
		 
		for(i = 0; i < (length1+length2); i++)
		{
		if(result[i] > 9)
		{
		result[i+1] += result[i]/10;
		result[i] %= 10; 
		}
		}
		//将前导0全部剔掉，比如我们结果是236，在result中
		//是这样存储的63200……我们需要定位到第一个不为零的数，它的位置也就是i ，两数相乘，位数最多是两数位数之和
		 
		for(i = length1 + length2; i >= 0 ; i--)
		{
		if(result[i] == 0) continue;
		else break;
		}
		//接着i继续输出，就是我们的结果 
		for(; i >=0; i--)
		{
			cout<<result[i];
		}
		cout<<endl;
		}
return 0;
 } 
