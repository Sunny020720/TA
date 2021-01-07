//数组删除和添加
#include<stdio.h>
int main()
{
	int count = 5;
	double wly[]={1,2,3,4,5};
	double deletenum;//要删除的数字 
	int deleteindex = -1;//要删除的下标 
	int i;
	printf("输入要删除的数字：\n");
	scanf("%lf",&deletenum); 
	for(i = 0;i < count;i++)
	{
		if(deletenum == wly[i])
		{
			//记录下表
			deleteindex = i;
			break;//找到了，跳出循环 
		}
	}
	//根据判断，执行后续操作
	if(-1 == deleteindex)
	{
		printf("没有找到！\n"); 
	 } 
	 else
	 {
	 	//从找到的下标开始 ，后面一个覆盖前一个数字
		 for(i = deleteindex;i < count - 1;i++) 
		 {
		 	wly[i] = wly[i+1];
		 }
	 }
	 //总长度减一
	 count--;
	 for(i = 0;i < count ;i++)
	 {
		printf("%.2lf ",wly[i]) ;
	 }
	
	return 0;
 } 
