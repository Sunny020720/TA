#include<iostream>
#include<algorithm>
using namespace std;
int main() {

    int n, i;

    scanf("%d", &n);  // 有n组数据

    for (i = 0; i < n; i++) {

        int num[4];
        scanf("%d %d %d %d",&num[0],&num[1],&num[2],&num[3]);
        sort(num,num+4);

		
		printf("%d %d %d %d\n",num[0],num[1],num[2],num[3]);
        // 读入4个整数，对这4个整数排序，并输出结果

        // 请将排序代码写在这里，不能使用循环语句

    }

   

    return 0;

}


