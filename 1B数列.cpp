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
		vector<int> result;	//��Ž��	result
		int num;//�Ȳ�Ϊ1 �ȱ�Ϊ2 �Ϊ3 
		
	//*********������**********		
	int late_5[100000][5];			//��ź���λ���� 
	int tuibutuichu = 1;	//�˲��˳� 
	
							//�������� 
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
		
    while(tuibutuichu)		//����Ϊ0 0 0 0 0ʱ�˳� 
    {
	    gongcha = a[1] - a[0];//���� 
    	gongbi = a[1] / a[0];
		
							//�ж��Ƿ�Ϊ�Ȳ�����
		for(i = 1;i < 4;i++)
		{	
    	  if (gongcha != a[i+1] - a[i])
    	  { 
    	  	 flag1 = 1;
    	  	 break;
		  }
		}
							//�ж��Ƿ�Ϊ�ȱ����� 
		for(i = 1;i < 4;i++)
		{
		
    	  if (gongbi != a[i+1]/a[i])
    	  {
    	  	 flag2 = 1;
    	  	 break;
		  }
		} 
							//�ж��Ƿ�Ϊ쳲�����������
		for(i = 0;i < 3;i++)
		{
    	  if (a[i+2] != a[i+1]+a[i])
    	  {
    	  	 flag3 = 1;
    	  	 break;
		  }
		} 	

	/*���� Ҫ�����뼸������ֱ������0 0 0 0 0 ʱ��ֹ���� Ȼ����������*/
	 
	if(flag1 == 0)//���㱣��Ȳ����к�����λ 
		{
//			printf("case one\n");
//			printf("%d %d %d %d %d\n",a[4]+gongcha,a[4]+gongcha*2,a[4]+gongcha*3,
//			a[4]+gongcha*4,a[4]+gongcha*5);
//*********************************************************************************************************************************
		    num = 1;
		    result.push_back(num);//ÿ��һ�����־Ͱ�����ӵ�������� 

			late_5[j][0] = a[4]+gongcha;   late_5[j][1] = a[4]+gongcha*2;
			late_5[j][2] = a[4]+gongcha*3; late_5[j][3] = a[4]+gongcha*4; late_5[j][4] = a[4]+gongcha*5;
			j++;	
			
			} 
	if(flag2 == 0) //���㱣��ȱ����к�����λ 
			
		{
		    num = 2;
		    result.push_back(num);//���µ�num��ӵ�������� 
			late_5[j][0] = a[4]*pow(gongbi,1); late_5[j][1] = a[4]*pow(gongbi,2);
			late_5[j][2] = a[4]*pow(gongbi,3); late_5[j][3] = a[4]*pow(gongbi,4); late_5[j][4] = a[4]*pow(gongbi,5);
			j++;
//			printf("case two\n");
//			printf("%.0lf %.0lf %.0lf %.0lf %.0lf\n",a[4]*pow(gongbi,1),a[4]*pow(gongbi,2),a[4]*pow(gongbi,3),a[4]*pow(gongbi,4),a[4]*pow(gongbi,5));
			
		}
			
	if(flag3 == 0)//����쳲����������к�����λ 
		{
		    num = 3; 
		    result.push_back(num);//ÿ����һ�����־Ͱ�����ӵ�������� 
		    
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
	
	 flag1 = 0;flag2 = 0;flag3 = 0;//һ�ν������ʼ��flag��ֵ 
	
	//�ٴ����� 
	
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
	int len = result.size();// ���������������鳤�� 
	
	
	//������� ������ 
    for(j = 0;j<len;j++)
    {
    	if(result[j] == 0) break;
    	
		if(result[j] == 1)//�Ȳ� 
    	{
    		printf("case one");
		}
		
		else if(result[j] == 2)//�ȱ� 
		{
			printf("case two");
		}
		
		else if(result[j] == 3)//쳲����� 
		{
			printf("case three");
		} 
		printf("\n");
//���������λ 
      for(i = 0;i < 5;i++)
      {
      	 printf("%d ",late_5[j][i]);
	  }
	    
	   if(result[j+1] ==1||result[j+1] == 2||result[j+1] == 3 ) printf("\n");
	}
       
  return 0;
}
