#include<stdio.h>
#include<string.h>
#define N 80


int main(void)
{
	int n, i, s;//s��������Ϊstr1������ 
	char str[N],  letter[N][N];//һά����str1�����洢ÿ���ַ��� 
	int len[N], leng, max;//len����洢��Ӧ���ʳ��� 
	int a, b;//a��Ϊletter��len����������b��Ϊletter��������,cΪmax������ 
	
	scanf("%d", &n);
	getchar();
	
	for(i = 1;i <= n;i++) 
	{
		//���ַ���������str 
		for(s = 0;(str[s] = getchar()) != '\n';s++)
		 	;
		
		//�ж��ַ����Ƿ�Ϸ� 
		for(s = 0;str[s] != '\n';s++)
		{
		   if(('A' <= str[s]&&str[s] <= 'Z')||('a' <= str[s]&&str[s] <= 'z')||(str[s] == ' '))
				;
		else
		{
			printf("Input Error\n"); 	goto done;
		}
		}
			//�ѵ��ʷָ���㳤�� 
		for(s = 0, a = 0;str[s] != '\n';a++)
		{
			for(b = 0;str[s] != ' '&&str[s] != '\n';b++)
			{
			letter[a][b] = str[s];s++;
			}
			//�����ո� 
			for(;str[s] == ' ';s++ )
			;
			//���㳤�� 
			len[a] = strlen(letter[a]);
		}
		leng = a - 1;
	 
		//max�洢����ʵ��±ֻ꣬������������еĵ�һ���ʵ��±� 
		max = 0;
		for(a = 0;(a + 1) <= leng;a++)
		{
			if(len[max] < len[a + 1])
			max = a + 1;		
		}
  		  //֪��������ʵĳ��� 
		leng = len[max];

		for(a = 0;len[a] != '\0';a++) 
            if(len[a] == leng)
			printf("%s,", letter[a]);
    
		printf("\n");
		
		done : ;	
	}
return 0;
}
