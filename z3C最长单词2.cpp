#include<stdio.h>
#include<string.h>
#define N 80


int main(void)
{
	int n, i, s;//s就用来作为str1的索引 
	char str[N],  letter[N][N];//一维数组str1用来存储每个字符串 
	int len[N], leng, max;//len依序存储对应单词长度 
	int a, b;//a作为letter或len的行索引，b作为letter的列索引,c为max的索引 
	
	scanf("%d", &n);
	getchar();
	
	for(i = 1;i <= n;i++) 
	{
		//将字符存入数组str 
		for(s = 0;(str[s] = getchar()) != '\n';s++)
		 	;
		
		//判断字符串是否合法 
		for(s = 0;str[s] != '\n';s++)
		{
		   if(('A' <= str[s]&&str[s] <= 'Z')||('a' <= str[s]&&str[s] <= 'z')||(str[s] == ' '))
				;
		else
		{
			printf("Input Error\n"); 	goto done;
		}
		}
			//把单词分割并计算长度 
		for(s = 0, a = 0;str[s] != '\n';a++)
		{
			for(b = 0;str[s] != ' '&&str[s] != '\n';b++)
			{
			letter[a][b] = str[s];s++;
			}
			//跳过空格 
			for(;str[s] == ' ';s++ )
			;
			//计算长度 
			len[a] = strlen(letter[a]);
		}
		leng = a - 1;
	 
		//max存储最长单词的下标，只存所有最长单词中的第一个词的下标 
		max = 0;
		for(a = 0;(a + 1) <= leng;a++)
		{
			if(len[max] < len[a + 1])
			max = a + 1;		
		}
  		  //知道了最长单词的长度 
		leng = len[max];

		for(a = 0;len[a] != '\0';a++) 
            if(len[a] == leng)
			printf("%s,", letter[a]);
    
		printf("\n");
		
		done : ;	
	}
return 0;
}
