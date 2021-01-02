//统计回文数
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[100000],temp[200][100];
	int num[10000];
	int i =0;
	while((s[i]=getchar())!=EOF)
	{
		i++;
	}
	int len = strlen(s);
	int p =0;
		int x = 0;
	for(int i=0;i<len;i++)
	{
		
		if(s[i]>='0'&&s[i]<='9')
		{
			temp[x][p]= s[i];
			p++;
		}
		else if(s[i]<'0'||s[i]>'9')
		{
			if(p!=0)
			{
				p=0;
				x++;
			}
		}
	}
	
	int nub[10000];
	int g = 0;
    for(int i = 0;i<x;i++)
    {
    	char t[200]={0};
    	int l = 0;
    	if(strlen(temp[i])==1)
    	{
    		continue;
		}
    	for(int j = strlen(temp[i])-1;j>=0;j--)
    	{
    		t[l] = temp[i][j];//每个数字 
    		l++;
		}
	
        if(strcmp(t,temp[i])==0)
        {
        	nub[g] = i;
        
        	g++;
		}
	}

	int max[200]={0,0,0,0,0,0,0,0,0,0,0,0,0};
	for(int i =0;i<g;i++)
	{
		for(int j = 0;j<g;j++)
		{
			if(strcmp(temp[nub[i]],temp[nub[j]])==0)
			{
				max[i]+=1;
			}
		}
	}
//
	int m =0;
	int ma = 0;
	for(int i=0;i<g;i++)
	{
		if(max[i]>m)
		{
			m=max[i];
			ma = i;
		}
	}
	int j=0;
	char end[100][100];
	for(int i = 0;i<g;i++)
	{
		if(max[i]==m&&temp[nub[i]][0]!='0')
		{
			int fh=0;
			for(int w =0;w<j;w++)
			{
				if(strcmp(temp[nub[i]],end[w])==0)
				{
					fh=1;
				}
			}
			if(fh==0)
			{
			strcpy(end[j],temp[nub[i]]);
			j++;
		    }
		}
	}
	//比较大小 
	for(int i = 0;i<j;i++)
	{
		for(int v =i+1;v<j;v++)
		{
			if(strlen(end[i])>strlen(end[v]))//长度不同 
			{
				char tap[1000];
				strcpy(tap,end[i]);
				strcpy(end[i],end[v]);
				strcpy(end[v],tap);
			
			}
			else if(strlen(end[i])==strlen(end[v]))//长度相同 
			{
				for(int h=0;h<strlen(end[i]);h++) 
				{
					if(end[i][h]>end[v][h])
					{
						char tap[1000];
				strcpy(tap,end[i]);
				strcpy(end[i],end[v]);
				strcpy(end[v],tap);
				
				break;
					}
				}
			}
		}
	}
	if(g!=0)
	{
		if(j==0){
			printf("None\n");
		} 
	else 
	{
		for(int i = 0;i<j;i++)
	{
			printf("%s %d\n",end[i],max[ma]);
	}
	}
}
else
{
	printf("None\n");
}

}

