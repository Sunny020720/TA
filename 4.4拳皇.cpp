#include<stdio.h>
#include<stdlib.h>//��׼�� 
#include<time.h> //time()   
#include<windows.h>//sleep

int main4()
{
	//�������
	srand(time(NULL));
	//rand()������ȡֵ��Χ��0-32767 
	printf("������֣�%d\n",rand());
/*	��Ҷ�ս
    ˫����ʼhpΪ100
	ÿ�ι���5-15
	hp���ȵ�0�����µı�KO 
*/ 
	int hp1 = 100,hp2 = 100;//��ʼѪ�� 
	int att1,att2; //ÿ�εĹ��� 
	int i = 0; 
	while(hp1>=0 && hp2 >= 0)
	{
		//
		att1 = rand() % 11 + 5;//5-15֮��Ĺ����� 
		if(att1 == 15) //���� 
		   att1 *= 2;//��������Ϊԭ�������� 
		   
		att2 = rand() % 11 + 5; 
		
		//���1���������2��Ѫ
		hp2 -= att1;
		//���2���������1��Ѫ
		hp1 -= att2;
		//���������˴��������ʹ��if�жϣ�Ѫ������0�ģ����ж�Ϊ�� 
		printf("*************************\n"); 
		printf("��%d�֣� \n",i + 1);
		printf("���1�������� %d,���2ʣ��Ѫ���� %d\n",att1,hp2); 
		printf("���2�������� %d,���1ʣ��Ѫ���� %d\n",att2,hp1); 
		printf("*************************\n"); 
		i++;
		Sleep(500);//����500ms 
	 } 
	 printf("gameover ���1��Ѫ��: %d\t���2��Ѫ���� %d\n",hp1,hp2); 
	
	return 0;
}
