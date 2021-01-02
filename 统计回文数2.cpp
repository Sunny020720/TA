#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(char a[],char b[])
{
    int lena = strlen(a) ,lenb = strlen(b);
    if(lena > lenb) return 1;
    if(lena < lenb) return -1;
    if(lena == lenb) return strcmp(a,b);
}
int main(){
    char nums[100][150];
    int i = 0 ,j = 0,k = 0,sum = 0,max = 0;
    int state = 0; 			// 0 未读取数字 1 正在读取数字
    while(1)
    {
        char c = getchar();
        if(c == EOF) break;
        if(c <= '9' && c >= '0')     //分割数字存入相应 字符串数组中
        {
            if(state == 1)
            {
            nums[k][j] = c;
            j++;
            }
            if(state == 0 && c != '0')
            {
                state = 1;
                nums[k][j] = c;
                j++;
            }
        }
        else
        {
            if(state == 1)
            {
                k++;
                j = 0;
                state = 0;
            }
        }           // k 有多少个整数存入
	}
    int counter[100] = {0};     //每个回文数的出现次数
    char nums1[150],save[100][150] = {0};        //存有的所有回文数（不同类型)
    int m = 0;      //save个数
    for(i = 0;i < k;i++)
    {
        memset(nums1,0,sizeof(nums1));
        int flag = 1, ln = strlen(nums[i]);
        for(j = 0;j < ln;j++)
        {
            nums1[ln - 1 - j] = nums[i][j];
        }
        if(strcmp(nums1,nums[i]) != 0 || ln == 1) continue;        //非回文数则跳过
        else
        {
            for(int x = 0;x < m;x++)
            {
                if(strcmp(nums[i],save[x]) == 0 )
                {
                    counter[x]++;
                    flag = 0;
                }    
            }
            if(flag == 1)
            {
                strcpy(save[m],nums[i]);
                counter[m]++;
                m++;
            }
        }
    }
    if(m == 0)
    {
        printf("None");
        return 0;
    }
    for(i = 0;i < m;i++)
    {
        if(counter[i] >= max)
        max = counter[i];
    }
    char ans[20][150] = {0}; k = 0; j = 0;
    for(i = 0;i < m;i++)
    {
        if(counter[i] == max)
        {
            strcpy(ans[k],save[i]);
            k++;
        }
    }
    for(i = 0;i < k;i++)
    {
        memset(nums1,0,sizeof(nums1));
        for(j = 0;j < k - i - 1;j++)
        {
            if(cmp(ans[j],ans[j+1]) > 0)
            {
                strcpy(nums1,ans[j]);
                strcpy(ans[j],ans[j+1]);
                strcpy(ans[j+1],nums1);
            }
        }
    }
    for(i = 0;i < k;i++) printf("%s %d\n",ans[i],max);
    return 0;
}
