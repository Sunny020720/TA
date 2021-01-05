//80 120 90     80 90 120 
//120 90 200 		90 120 200 
//90 200 100		90 100 200 
//200 100 110		100 110  200 
//100 110 150
#include<iostream>
using namespace std;
int main()
{
	int w,n;
	while(cin>>w)
	{
	cin>>n;	int num[n];int num1[n];
	for(int j=0;j<n;j++)
		{
			cin>>num[j];
		}
	if(w%2==0){cout<<"ERROR\n";continue;}//w为偶数错误 
	//先一个数组存所有数，再另一个长度为w的数组分别依次存放w个数，记录中间数的下标，并记录中值，
	//最后把数组中对应下标的数替换为中值 
	//中值的个数为n-w+1
	int middle[n-w+1];
	int p=0,q=0;//中值下标 
	int ip[w];//存放w个数 
	
	while(q<n)
	{
        int aim=0;
			for(int i=0;i<w;i++)
		{
			ip[i]=num[q];
            //记录中间值对应num的下标
            if(i==(w-1)/2){aim=q;
            }
            q++;
			// cout<<"ip["<<i<<"]="<<ip[i]<<endl;
		}
        if(q<n){q-=(w-1); //重置起始点
	// cout<<"q="<<q<<endl;
		}
      
		//冒泡排序 
		for(int i=0;i<w-i;i++)
		{
			for(int j=0;j<w-i-1;j++)
			{
				if(ip[j]>ip[j+1])
				{
					int temp = ip[j];
					ip[j]=ip[j+1];
					ip[j+1]=temp; 
				}
			}
		 } 
		 //中值
		  middle[p]=ip[(w+1)/2-1]; 
          num1[aim]=middle[p];
        //   cout<<"num1["<<aim<<"]="<<num1[aim]<<endl;
          //不改变num原来的值，否则会影响下一次
		//   cout<<"middle["<<p<<"]="<<middle[p]<<endl;
		  p++;
	}
    int i=0;
    for( i=0;i<(w-1)/2;i++)//前w-1 /2个数是不变的
         {cout<<num[i]<<" ";}
    for(;i<n-(w-1)/2;i++)
        {
            cout<<num1[i]<<" ";
        }
    for(;i<n;i++)
    {cout<<num[i]<<" ";}
        cout<<endl;
	
	  
 	}
   
 } 