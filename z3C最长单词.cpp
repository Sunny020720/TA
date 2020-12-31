//z3C最长单词
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,i,j,k,m;
	cin>>n;getchar();
	
	 for(i=0;i<n;i++)
	{
		char c;char eng[1000][20]={0};
		int p=0,q=0;int flag=0; int MAX=0;
		int len[1000]={0};
		char max[1000][20]={0};int count=0;
		int flag2=0;
		while((c=getchar())!='\n')
		{
			if((c<='Z'&&c>='A')||(c>='a'&&c<='z'))
			{
				eng[p][q]=c;q++;	
			}
			else if(c==' '){ 
				if(q==0){continue;}//多个空格 
					else{p++;q=0;
					}
				}
//			else if(c=='\n'){break;}
			else{cout<<"Input Error\n";flag=1;break;}
		}//清缓存区 
	
			if(flag==1){fflush(stdin);
				continue;
			}
			for(j=0;j<p+1;j++)
			{
				len[j]=strlen(eng[j]);
				if(MAX<len[j]){MAX=len[j];
				}
//			cout<<"eng["<<j<<"]="<<eng[j]<<" strlen="<<len[j]<<endl;
			}	
		
		for(j=0;j<p+1;j++)
		{
			if(MAX==len[j]){
//				for(k=0;k<count;)
//				{
//					if(strcmp(eng[j],max[k])==0)//如果要跳过重复的单词 
//					flag2=1;break;
//				}
//				if(flag2==1)continue;
				strcpy(max[count],eng[j]);
				cout<<max[count]<<",";
				count++;
			}
		}
		cout<<endl; 
	} 
	return 0; 
 } 
