//B
#include<iostream>
#include<math.h>
#include<vector> 
using namespace std;

int main()
{
	int a[5]={0};
	
	int i = 0;int j = 0;
	int flag1 = 0,flag2 = 0,flag3 = 0;
	int gongcha; 
	int gongbi;
	//*********************************************** 
		vector<int> result;	//存放结果	result
		int num;//等差为1 等比为2 斐为3 
		
	//*********改这里**********		
	int late_5[100000][5];			//存放后五位数字 
	int tuibutuichu = 1;	//退不退出 
	
							//存入数组 
	for(i = 0;i < 5;i++)
		{
		scanf("%d",&a[i]);
		getchar(); 
		}	
		
	if(a[0] != 0 && a[1]!=0 && a[2]!=0 && a[3]!=0 && a[4] !=0)
    	{
    		tuibutuichu = 1;
		}
		else{tuibutuichu = 0;}
		
    while(tuibutuichu)		//输入为0 0 0 0 0时退出 
    {
	    gongcha = a[1] - a[0];//公差 
    	gongbi = a[1] / a[0];
		
							//判断是否为等差数列
		for(i = 1;i < 4;i++)
		{	
    	  if (gongcha != a[i+1] - a[i])
    	  { 
    	  	 flag1 = 1;
    	  	 break;
		  }
		}
							//判断是否为等比数列 
		for(i = 1;i < 4;i++)
		{
		
    	  if (gongbi != a[i+1]/a[i])
    	  {
    	  	 flag2 = 1;
    	  	 break;
		  }
		} 
							//判断是否为斐波那契型数列
		for(i = 0;i < 3;i++)
		{
    	  if (a[i+2] != a[i+1]+a[i])
    	  {
    	  	 flag3 = 1;
    	  	 break;
		  }
		} 	

	/*改这 要先输入几组数据直到输入0 0 0 0 0 时终止输入 然后再输出结果*/
	 
	if(flag1 == 0)//计算保存等差数列后面五位 
		{
//			printf("case one\n");
//			printf("%d %d %d %d %d\n",a[4]+gongcha,a[4]+gongcha*2,a[4]+gongcha*3,
//			a[4]+gongcha*4,a[4]+gongcha*5);
//*********************************************************************************************************************************
		    num = 1;
		    result.push_back(num);//每新一个数字就把它添加到数组最后 

			late_5[j][0] = a[4]+gongcha;   late_5[j][1] = a[4]+gongcha*2;
			late_5[j][2] = a[4]+gongcha*3; late_5[j][3] = a[4]+gongcha*4; late_5[j][4] = a[4]+gongcha*5;
			j++;	
			
			} 
	if(flag2 == 0) //计算保存等比数列后面五位 
			
		{
		    num = 2;
		    result.push_back(num);//把新的num添加到数组最后 
			late_5[j][0] = a[4]*pow(gongbi,1); late_5[j][1] = a[4]*pow(gongbi,2);
			late_5[j][2] = a[4]*pow(gongbi,3); late_5[j][3] = a[4]*pow(gongbi,4); late_5[j][4] = a[4]*pow(gongbi,5);
			j++;
//			printf("case two\n");
//			printf("%.0lf %.0lf %.0lf %.0lf %.0lf\n",a[4]*pow(gongbi,1),a[4]*pow(gongbi,2),a[4]*pow(gongbi,3),a[4]*pow(gongbi,4),a[4]*pow(gongbi,5));
			
		}
			
	if(flag3 == 0)//计算斐波那契型数列后面五位 
		{
		    num = 3; 
		    result.push_back(num);//每新有一个数字就把它添加到数组最后 
		    
			late_5[j][0] =  a[4]+a[3]; late_5[j][1] = late_5[j][0] + a[4];
			late_5[j][2] = late_5[j][1] + late_5[j][0];	late_5[j][3] = late_5[j][2] + late_5[j][1];
			late_5[j][4] = late_5[j][3] + late_5[j][2];
			j++;
//	printf("case three\n");
			
//			a[5] = a[4]+a[3];a[6] = a[4]+a[5];
//			a[7] = a[5]+a[6];a[8] = a[6]+a[7];a[9] = a[7]+a[8];
//			
//			printf("%d %d %d %d %d\n",a[5],a[6],a[7],a[8],a[9]);
		}
	
	 flag1 = 0;flag2 = 0;flag3 = 0;//一次结束后初始化flag的值 
	
	//再次输入 
	
    for(i = 0;i < 5;i++)
		{
		scanf("%d",&a[i]);
		getchar(); 
		}
	
	if(a[0] != 0 && a[1]!=0 && a[2]!=0 && a[3]!=0 && a[4] !=0)
    	{
    		tuibutuichu = 1;
		}
		else{tuibutuichu = 0;}
    } 
    
	
	
	
	
	//*********************************************************** 
	int len = result.size();// 输入结束后计算数组长度 
	
	
	//输入结束 输出结果 
    for(j = 0;j<len;j++)
    {
    	if(result[j] == 0) break;
    	
		if(result[j] == 1)//等差 
    	{
    		printf("case one");
		}
		
		else if(result[j] == 2)//等比 
		{
			printf("case two");
		}
		
		else if(result[j] == 3)//斐波那契 
		{
			printf("case three");
		} 
		printf("\n");
//再输出后五位 
      for(i = 0;i < 5;i++)
      {
      	 printf("%d ",late_5[j][i]);
	  }
	    
	   if(result[j+1] ==1||result[j+1] == 2||result[j+1] == 3 ) printf("\n");
	}
       
  return 0;
}
