#include<stdio.h>
//��·��ֵ   
 
int main()
{
	int a=3,b=3;
	
	(a=0)&&(b=5);//��  a=0Ϊ�٣���˺��治���� 
	printf("a=%d,b=%d\n",a,b);
	
	(a=1)||(b=5);//a=1Ϊ�� 
	printf("a=%d,b=%d\n",a,b);//��  a=1Ϊ�棬so���治�� 
	return 0;
}
