//����ɾ�������
#include<stdio.h>
int main()
{
	int count = 5;
	double wly[]={1,2,3,4,5};
	double deletenum;//Ҫɾ�������� 
	int deleteindex = -1;//Ҫɾ�����±� 
	int i;
	printf("����Ҫɾ�������֣�\n");
	scanf("%lf",&deletenum); 
	for(i = 0;i < count;i++)
	{
		if(deletenum == wly[i])
		{
			//��¼�±�
			deleteindex = i;
			break;//�ҵ��ˣ�����ѭ�� 
		}
	}
	//�����жϣ�ִ�к�������
	if(-1 == deleteindex)
	{
		printf("û���ҵ���\n"); 
	 } 
	 else
	 {
	 	//���ҵ����±꿪ʼ ������һ������ǰһ������
		 for(i = deleteindex;i < count - 1;i++) 
		 {
		 	wly[i] = wly[i+1];
		 }
	 }
	 //�ܳ��ȼ�һ
	 count--;
	 for(i = 0;i < count ;i++)
	 {
		printf("%.2lf ",wly[i]) ;
	 }
	
	return 0;
 } 
