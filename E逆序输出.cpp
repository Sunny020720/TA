//E单词排序
#include<iostream>
#include<string>
using namespace std;
int main()
{
	//先判断是不是英文字符，一个个找单词，
	//找到后立即逆序输出 
	string num;getline(cin,num);
	int len=num.length();
	int i=0,j,l;
	char temp[100];
	int count=0; 
	for(;i<len;i++)
	{   
	    int k=0;
		//是字母 逆序输出 
		while((num[i]>='a'&&num[i]<='z')||(num[i]>='A'&&num[i]<='Z'))
		{
			temp[k]=num[i];k++;i++; 
		}
		//此时一个单词有k个字母 
		 for(j=k-1;j>=0;j--)
		 {
		 	cout<<temp[j];
		 }
		//其他字符直接输出 
		cout<<num[i];
		 
	}
}
