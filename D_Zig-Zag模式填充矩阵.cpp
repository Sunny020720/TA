#include<stdio.h>

int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        int tu[m][n];
        int x=1;//Ҫ����� 
        int i=0,j=0;//�±꣬iΪ�ᣬjΪ�� 
        int flag=0;//flag==0�������ߣ�==1�������� 
        while(i!=m&&j!=n)//����������û����һ��λ�� 
        {
            tu[i][j]=x;//���� 
            x++;
            //�����±�ָ���λ�� 
            if(flag==0)//�������� 
            {
                if(j+1<n)//��û���Խ��������Ͻ� 
                {
                    if(i-1<0)//������� 
                    {
                        j++;//���� 
                        flag=!flag;//������ 
                    }
                    else//������������ 
                    {
                        i--;
                        j++;
                    }
                }
                else//���Խ����� 
                {
                    i++;//���� 
                    flag=!flag;//������ 
                }
            }
            else//�������� 
            {
                if(i+1<m)//û���Խ��������½� 
                {
                    if(j-1<0)//���������� 
                    {
                        i++;//���� 
                        flag=!flag;//������ 
                    }
                    else//���������½��� 
                    {
                        i++;
                        j--;
                    }
                }
                else//�������½��� 
                {
                    j++;//���� 
                    flag=!flag;//������ 
                }
            }
        }

        //��ӡ 
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            { 
                if(j!=n-1)//������β�ո񲻴�ӡ 
                {
                    printf("%d ",tu[i][j]);
                }
                else
                {
                    printf("%d ",tu[i][j]);
                }
            }
            printf("\n");
        }
    }


    return 0;
}
