#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct INFO
{
    char name[9];
    int CHN,math,ENG;
} INFO;
int main(){
    int n;
    scanf("%d",&n);
    INFO student[n];
    int sum[n];
    int t = 0;
    int i,save = 0;
    for(i = 0;i < n;i++)
    {
        scanf("%s",student[i].name);
        scanf("%d %d %d",&student[i].CHN,&student[i].math,&student[i].ENG);
        sum[i] = student[i].CHN + student[i].math + student[i].ENG;
  		if(sum[i] > save)
        {
            t = i;
            save = sum[i];            	
		}
    }
    printf("%s %d %d %d",student[t].name,student[t].CHN,student[t].math,student[t].ENG);
    return 0;
}


//------P1996 Ô¼Éª·òÎÊÌâ----------------------
