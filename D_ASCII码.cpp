#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i1,n;
    scanf("%d",&n);
    for(i1 = 0;i1 < n;i1++)
    {
        int i;
        char num[100];
        memset(num,0,100*sizeof(char));
        scanf("%s",&num);
        int len = strlen(num);
        int save[len/2][2];
        int k = 0;
        int ans1[len/2];
        char ans[len/2];
        for(i = 0;i < len / 2;i++)
        {
            for(int j = 0;j < 2;j++)
            {
                if(num[k] <= '9' && num[k] >= '0')
                save[i][j] = num[k] - '0';
                else
                save[i][j] = num[k] - '7';       //字母转十六进制整数
                k++;
            }
            ans1[i] = save[i][0] * 16 + save[i][1];
            ans[i] = ans1[i]; 
            printf("%c",ans[i]);
        }
        printf("\n");
    }
    return 0;
}