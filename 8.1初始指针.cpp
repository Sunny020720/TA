#include<iostream>
using namespace std;

int main1()
{
	int num = 9;
	int * ptr_num = &num ;
	
	//*****ָ��ĵ�ַ***** 
	int ** ptr_num2 = &ptr_num; 
	
	//%pָ��ռλ�� 
	printf("num�����ĵ�ַ�ǣ�%p\t%x\n",ptr_num,&num);

	printf("\nָ��ptr_num�����ĵ�ַ�ǣ�%p\n",ptr_num2);
	//****ͨ��ָ���ָ�룬���ʵ�ԭָ��ָ��Ŀռ�***
	 printf("\nԭ�ռ�num��Ӧ��ֵ�ǣ�%d\n",**ptr_num2); 
	 
	//ʹ��ָ���޸ı���ֵ
	
	*ptr_num = 9999; 
	printf("\n*ptr_num��Ӧ��ֵ�ǣ�%d\n",num);
	return 0;
	
 } 
