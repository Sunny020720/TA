//5D最多的单词
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char ENG[100][20]={};
	char temp[1000]={0};int n=0,m=0,q=0;
	int i,j,k,l;
			//存入 无问题 
	while((temp[q]=getchar())!=EOF)
	{
		if(temp[q]>='a'&&temp[q]<='z')
		{
			ENG[n][m]=temp[q];m++;
		}
		else if(temp[q]>='A'&&temp[q]<='Z')
		{
			temp[q]+='a'-'A';
			ENG[n][m]=temp[q];m++;
		}
		else if(q>0)//temp不是英文 
		{
		 if((temp[q-1]>='A'&&temp[q-1]<='Z')||(temp[q-1]>='a'&&temp[q-1]<='z'))
		 	{n++;m=0;}//temp之前一位为英文
		//前一位为英文 证明一个单词刚结束，开始记录下一个 	 
	
		}
		q++;
	 } 
	 //结束时n为单词个数 
//	 for(int i=0;i<n;i++)
//	 {	cout<<"ENG["<<i<<"]="<<ENG[i]<<" ";	  } 

		// 统计每个单词个数 记录最大次数 
		int count[n];
		for(j=0;j<n;j++)
		{count[j]=1;
		}
		
		int MAX=0;
		for(i=0;i<n;i++)
		{
//			cout<<"ENG["<<i<<"]="<<ENG[i]<<endl;
			if (strcmp(ENG[i],"!")==0){
			count[i]=0;continue;
			}
			for(j=i+1;j<n;j++)
			{
				if(strcmp(ENG[i],ENG[j])==0)
				{count[i]++;strcpy(ENG[j],"!");//避免重复 
				}
			}
			if(MAX<count[i]){MAX=count[i];
			}
		}
		// 找出最大次数的单词 
		char result[1][10]={"?"};
		for(i=0;i<n;i++)
		{
			if(count[i]==MAX)
			{
			if(strcmp(result[0],"?"))	strcpy(result[0],ENG[i]);
			
			else if(ENG[i][0]>result[0][0])strcpy(result[0],ENG[i]);
			}
		 } 
		 cout<<result[0]<<" "<<MAX<<endl;
 } 
