//D
#include<iostream>
#include<string.h>
#include<stdlib.h>


using namespace std;
int main()
{
	//����n��ѧ�������� ���֤�� �ɼ� 
	int n;
	int i;
 
	cin>>n;
	char name[n+1][10];char sfz[n+1][20];
	int score[n];
	
	char ch[1][10];//�ݴ�ɼ� 
	//���� 
	for(i = 0;i < n;i++)
	{
	
		cin>>name[i];
		
		cin>>sfz[i];
		
		getchar();
		cin>>ch[1];
//		cout<<"ch="<<ch[1]<<"\n";
	    if(strcmp(ch[1],"n/a") == 0)//û�гɼ�Ϊn/a 
		{
	    score[i]=666;
		}
		else{
	    score[i]=atoi(ch[1]) ;//ǿ��ת������ ���� atoi 
		}
//		cout<<"score="<<score[i]<<endl;
	  
	}
	//�Ƚϳɼ� 
	int MAX=-1,MIN = 101;
	int maxNum = -1,minNum =-1; //�����Сѧ�����±� 
	for(i = 0;i<n;i++)
	{
	   if (score[i] == 666)
	   continue;//û�гɼ� �����˴�ѭ�� 
		
	   if(score[i]>MAX)//��� 
		{
			MAX = score[i];
			maxNum = i; 
			}
		else if(score[i]==MAX)//��ͬʱ��������ֵ������� 
		{
			if(name[i][0]<name[maxNum][0])
			{
			MAX = score[i];
			maxNum = i; 
			}
		}
		if(score[i]<MIN)//��С 
		{
			MIN = score[i];
			minNum = i;
			}	
		else if(score[i]==MIN)//��ͬʱ��������ֵ������� 
		{
			if(name[i][0]>name[minNum][0])
			{
			MIN = score[i];
			minNum = i; 
			}
		}			
	} 
	
	//���������ѧ�� 
	cout<<name[maxNum]<<" "<<sfz[maxNum]<<" "<<endl;
	cout<<name[minNum]<<" "<<sfz[minNum]<<" "<<endl;
	
	
	
	return 0;
 } 
