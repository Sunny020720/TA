#include<stdio.h>

int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        int tu[m][n];
        int x=1;//要填的数 
        int i=0,j=0;//下标，i为横，j为纵 
        int flag=0;//flag==0向右上走，==1向左下走 
        while(i!=m&&j!=n)//结束条件是没填到最后一个位置 
        {
            tu[i][j]=x;//填数 
            x++;
            //控制下标指向的位置 
            if(flag==0)//向右上走 
            {
                if(j+1<n)//还没到对角线最右上角 
                {
                    if(i-1<0)//到最顶行了 
                    {
                        j++;//右移 
                        flag=!flag;//换方向 
                    }
                    else//否则向右上走 
                    {
                        i--;
                        j++;
                    }
                }
                else//到对角线了 
                {
                    i++;//下移 
                    flag=!flag;//换方向 
                }
            }
            else//向左下走 
            {
                if(i+1<m)//没到对角线最左下角 
                {
                    if(j-1<0)//到最左列了 
                    {
                        i++;//下移 
                        flag=!flag;//换方向 
                    }
                    else//否则向左下角走 
                    {
                        i++;
                        j--;
                    }
                }
                else//到最左下角了 
                {
                    j++;//右移 
                    flag=!flag;//换方向 
                }
            }
        }

        //打印 
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            { 
                if(j!=n-1)//控制行尾空格不打印 
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
