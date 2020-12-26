#include<iostream>
int n,a,k;
int age(int num)
{
	if(num == 1)
	      return a;
	      return k+age(num - 1);
}
int main()
{
	
	scanf("%d%d%d",&n,&a,&k);//第几个人 第一个人年龄 年龄差 
	if(n<=2 || a>100 || k>100 || k<=0||a<=0)
	{
		printf("Wrong Number");
	}
	else{
	printf("%d\n",age(n));
	}
	return 0;
	
 } 
