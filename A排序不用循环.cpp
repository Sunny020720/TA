#include<iostream>
#include<algorithm>
using namespace std;
int main() {

    int n, i;

    scanf("%d", &n);  // ��n������

    for (i = 0; i < n; i++) {

        int num[4];
        scanf("%d %d %d %d",&num[0],&num[1],&num[2],&num[3]);
        sort(num,num+4);

		
		printf("%d %d %d %d\n",num[0],num[1],num[2],num[3]);
        // ����4������������4���������򣬲�������

        // �뽫�������д���������ʹ��ѭ�����

    }

   

    return 0;

}


