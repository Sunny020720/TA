//2D���ӱ�� 
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int r,c,i,j,p;cin>>r>>c;
	int table[r+1][c+1];
	for(i=0;i<r;i++)//���� 
	{
		for(j=0;j<c;j++)
		{
			cin>>table[i][j];getchar();
		}
	 } 
	int n,x1,x2,y1,y2,x,y;//�� �� 

	char temp[1][10];//������ 
	cin>>n;
	for(i=0;i<n;i++)
	{
	    scanf("%s",temp[0]);
//		cout<<"temp="<<temp[0]<<endl;
	   	
		//����x1�к�x2�� 
		if(strcmp(temp[0],"SR")==0)
	   	{
		    cin>>x1>>x2;
	   		int temp1[1][c]; 
	   		memcpy(temp1[0],table[x1-1],sizeof(int)*1*c);
	   		memcpy(table[x1-1],table[x2-1],sizeof(int)*1*c);
	   		memcpy(table[x2-1],temp1[0],sizeof(int)*1*c);
		}
		//����y1�к�y2�� 
		else if(strcmp(temp[0],"SC")==0)
		{
			cin>>y1>>y2;
			int temp2[1][c]; 
	   		for(j=0;j<r;j++)
			  { 
			  	temp2[0][0] = table[j][y1-1];
			  	table[j][y1-1]=	table[j][y2-1];
			    table[j][y2-1] = temp2[0][0];
			   } 
	    }	
	    //ɾ��x�� 
	    else if(strcmp(temp[0],"DR")==0)
	    {
	    	cin>>x;
	    	for(j=x-1;j<r-1;j++)
	    	{
	    		memcpy(table[j],table[j+1],sizeof(int)*c);
			}
			r-=1;
		}
	   	//ɾ��y��
		else if(strcmp(temp[0],"DC")==0) 
		{
			cin>>y;
			for(j=0;j<r;j++)
			{
				for(p=y-1;p<c-1;p++)
				{
				table[j][p]=table[j][p+1];
				}
			}
			c-=1;
		}
		//��x���������һ��ȫΪ0 
		else if(strcmp(temp[0],"IR")==0)
		{
			cin>>x;r+=1;
			for(j=r-1;j>x-1;j--)
	    	{
	    		memcpy(table[j],table[j-1],sizeof(int)*c);
			}
			
			for(p=0;p<c;p++)
			{
				table[x-1][p]= 0;
			}
		}
		//��y��ǰ�����һ��ȫΪ0
		else if(strcmp(temp[0],"IC")==0) 
		{
			cin>>y;
			for(p=0;p<r;p++)
			{
				for(j=c-1;j>y-1;j--)
				{
					table[p][j]=table[p][j-1];
				}
			}
			c+=1;
			for(p=0;p<r;p++)
			{
				table[y-1][p] = 0;
			}
		}
	   	
	}
	//������
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		cout<<table[i][j]<<" ";
		 }
		 cout<<endl;
	  } 
	return 0;
 } 
