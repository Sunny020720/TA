#include<iostream>
using namespace std;

int main1()
{
	int num = 9;
	int * ptr_num = &num ;
	
	//*****指针的地址***** 
	int ** ptr_num2 = &ptr_num; 
	
	//%p指针占位符 
	printf("num变量的地址是：%p\t%x\n",ptr_num,&num);

	printf("\n指针ptr_num变量的地址是：%p\n",ptr_num2);
	//****通过指针的指针，访问到原指针指向的空间***
	 printf("\n原空间num对应的值是：%d\n",**ptr_num2); 
	 
	//使用指针修改变量值
	
	*ptr_num = 9999; 
	printf("\n*ptr_num对应的值是：%d\n",num);
	return 0;
	
 } 
