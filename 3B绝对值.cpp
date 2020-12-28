//B¾ø¶ÔÖµ
#include<iostream>
using namespace std;
int main()
{
	int m;cin>>m;
	int MAX=0;
	for(int i=0;i<m;i++)
	{   int temp;
		cin>>temp;
		if(MAX>0||MAX==0)
		{
			if((temp>0&&temp>MAX)||(temp<0&&temp<-MAX))
			{
			MAX=temp;
			}	
		}
		else {
			if((temp>0&&temp>-MAX)||(temp<0&&temp<MAX))
			{
			MAX=temp;
			}	
		}
	
	}
	cout<<MAX<<endl; 
 } 
