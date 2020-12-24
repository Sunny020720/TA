//D
#include<iostream>
#include<string.h>
#include<stdlib.h>


using namespace std;
int main()
{
	//输入n名学生的姓名 身份证号 成绩 
	int n;
	int i;
 
	cin>>n;
	char name[n+1][10];char sfz[n+1][20];
	int score[n];
	
	char ch[1][10];//暂存成绩 
	//输入 
	for(i = 0;i < n;i++)
	{
	
		cin>>name[i];
		
		cin>>sfz[i];
		
		getchar();
		cin>>ch[1];
//		cout<<"ch="<<ch[1]<<"\n";
	    if(strcmp(ch[1],"n/a") == 0)//没有成绩为n/a 
		{
	    score[i]=666;
		}
		else{
	    score[i]=atoi(ch[1]) ;//强制转换类型 函数 atoi 
		}
//		cout<<"score="<<score[i]<<endl;
	  
	}
	//比较成绩 
	int MAX=-1,MIN = 101;
	int maxNum = -1,minNum =-1; //最大最小学生的下标 
	for(i = 0;i<n;i++)
	{
	   if (score[i] == 666)
	   continue;//没有成绩 结束此次循环 
		
	   if(score[i]>MAX)//最大 
		{
			MAX = score[i];
			maxNum = i; 
			}
		else if(score[i]==MAX)//相同时输出姓名字典序最大的 
		{
			if(name[i][0]<name[maxNum][0])
			{
			MAX = score[i];
			maxNum = i; 
			}
		}
		if(score[i]<MIN)//最小 
		{
			MIN = score[i];
			minNum = i;
			}	
		else if(score[i]==MIN)//相同时输出姓名字典序最大的 
		{
			if(name[i][0]>name[minNum][0])
			{
			MIN = score[i];
			minNum = i; 
			}
		}			
	} 
	
	//输出姓名和学号 
	cout<<name[maxNum]<<" "<<sfz[maxNum]<<" "<<endl;
	cout<<name[minNum]<<" "<<sfz[minNum]<<" "<<endl;
	
	
	
	return 0;
 } 
