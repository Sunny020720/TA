#include<stdio.h>
#include<stdlib.h>

int main()
{
 
	 //打开一个文件
//	fp = fopen("E:/Grade1class/BOOK/test.txt","r");//绝对地址 

	FILE *fp;//文件指针
	int ch = 0;
	fp = fopen("test2.txt","r+");//要求test2.txt要与该源文件在同一目录下 
	if(fp==NULL)
	{
		printf("falled\n");
	 } 
 	else{printf("successfully open\n");
 		//从文件中读出一个字符
//		 ch = fgetc(fp);
		//往文件中入一个字符 
		ch = fputc('z',fp);
		printf("read:%c",ch);
	 }
	 fclose(fp);
	  
	return 0; 
}
