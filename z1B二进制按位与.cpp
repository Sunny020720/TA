#include <stdio.h>

int NumberOf1_Solution2(int n)
{
      int count = 0;
//      unsigned int flag = 1;
      while(n)
      {
            n = n & n-1; 
			//���������г��ֵ�1�ӵ�λ����λ���α�Ϊ0 
            count ++;
//			printf("n=%d\n",n); 
      }

      return count;
}

int main()
{
        int a,b,n;
        scanf("%d",&a);
        for(b=0;b<a;b++)
		{
		scanf("%d",&n);
        while(n!=EOF)
		{
                printf("%d\n",NumberOf1_Solution2(n));
				break;
		}
	}
        return 0;
} 
