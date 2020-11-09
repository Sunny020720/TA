/* p.62  打印法定格式的日期   */ 

#include <stdio.h>

int main()
{
    int month,day,year;
    int i = 1;
    
    while(i)
    {
    printf("Enter data (mm/dd/yy):");
    scanf("%d/%d/%d",&month,&day,&year);
    printf("Dated this %d",day);
    switch(day)
    {
    case 1:case 21:case 31:
        printf("st");
        break;
    case 2:case 22:
        printf("nd");
        break;
    case 3:case 23:
        printf("rd");
        break;
    default:
        printf("th");
        break;
    }
    printf(" day of ");
    
    switch(month)
    {
    case 1:
        printf("January");break;
    case 2:
        printf("February");break;
    case 3:
        printf("March");break;
    case 4:
        printf("April");break;
    case 5:
        printf("May");break;
    case 6:
        printf("June");break;
    case 7:
        printf("July");break;
    case 8:
        printf("August");break;
    case 9:
        printf("September");break;
    case 10:
        printf("October");break;
    case 11:
        printf("November");break;
    case 12:
        printf("December");break;
    }
    printf(",  20%.2d.\n",year);
    
    //判断并输出星期几 
    {
	//把一月和二月看成是上一年的十三月和十四月，
	if(month == 1|| month == 2) 
	{
        month += 12;
        year--;
    }
    //基姆拉尔森计算公式  W= (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400) mod 7
    int Week=(day + 2 * month + 3 * (month+1) / 5 + year 
	+ year / 4 - year / 100 + year / 400) % 7;
	
    printf("这一天是 ") ;
	switch(Week)
    {
     
    case 0: printf("星期一\n"); break;
    case 1: printf("星期二\n"); break;
    case 2: printf("星期三\n"); break;
    case 3: printf("星期四\n"); break;
    case 4: printf("星期五\n"); break;
    case 5: printf("星期六\n"); break;
    case 6: printf("星期日\n"); break;
    }
}
    printf("输入0以退出,其他继续\n");
    scanf("%d",&i);
    }
    return 0;
}
