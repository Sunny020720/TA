#include<stdio.h>
#include<stdlib.h>

int main()
{
 
	 //��һ���ļ�
//	fp = fopen("E:/Grade1class/BOOK/test.txt","r");//���Ե�ַ 

	FILE *fp;//�ļ�ָ��
	int ch = 0;
	fp = fopen("test2.txt","r+");//Ҫ��test2.txtҪ���Դ�ļ���ͬһĿ¼�� 
	if(fp==NULL)
	{
		printf("falled\n");
	 } 
 	else{printf("successfully open\n");
 		//���ļ��ж���һ���ַ�
//		 ch = fgetc(fp);
		//���ļ�����һ���ַ� 
		ch = fputc('z',fp);
		printf("read:%c",ch);
	 }
	 fclose(fp);
	  
	return 0; 
}
