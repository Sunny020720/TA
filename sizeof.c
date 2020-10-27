//sizeof 获得数据类型或表达式的长度
#include<stdio.h>

int main()
{
	int i;
	char j;
	float k;
	
	i=123;
	j='c';
	k=3.14;
	
	printf("sizeof int is %d\n",sizeof(int));
	printf("sizeof i is %d\n",sizeof(i));
	printf("sizeof char is %d\n",sizeof (char));
	printf("sizeof j is%d\n",sizeof j);
	printf("sizeof float is %d\n",sizeof(float));
	printf("sizeof k is %d\n",sizeof k);
	printf("int= %d\n",sizeof(int));
	
	return 0;
	 } 
