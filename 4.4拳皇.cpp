#include<stdio.h>
#include<stdlib.h>//标准库 
#include<time.h> //time()   
#include<windows.h>//sleep

int main4()
{
	//随机函数
	srand(time(NULL));
	//rand()函数的取值范围是0-32767 
	printf("随机数字：%d\n",rand());
/*	玩家对战
    双方初始hp为100
	每次攻击5-15
	hp最先到0或以下的被KO 
*/ 
	int hp1 = 100,hp2 = 100;//初始血量 
	int att1,att2; //每次的攻击 
	int i = 0; 
	while(hp1>=0 && hp2 >= 0)
	{
		//
		att1 = rand() % 11 + 5;//5-15之间的攻击力 
		if(att1 == 15) //暴击 
		   att1 *= 2;//攻击力变为原来的两倍 
		   
		att2 = rand() % 11 + 5; 
		
		//玩家1攻击，玩家2掉血
		hp2 -= att1;
		//玩家2攻击，玩家1掉血
		hp1 -= att2;
		//建议两个人打完后，立即使用if判断，血量少于0的，就判定为输 
		printf("*************************\n"); 
		printf("第%d轮： \n",i + 1);
		printf("玩家1攻击力： %d,玩家2剩余血量： %d\n",att1,hp2); 
		printf("玩家2攻击力： %d,玩家1剩余血量： %d\n",att2,hp1); 
		printf("*************************\n"); 
		i++;
		Sleep(500);//休眠500ms 
	 } 
	 printf("gameover 玩家1的血量: %d\t玩家2的血量： %d\n",hp1,hp2); 
	
	return 0;
}
