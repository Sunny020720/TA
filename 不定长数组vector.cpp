#include<iostream>
#include<vector>//
using namespace std;
int main()
{
	vector<int> array;
	int num;
	while(1)
	{
		
		
		cin >> num;
		array.push_back(num);//ÿ����һ�����־Ͱ�����ӵ�������� 
		
		
		if (cin.get() == '\n')//����ǻس�������ѭ��
		break; 
	}
	
	
	int len = array.size();
	
	
	for (int i = 0;i < len; i++)
	{
		cout<<array[i]<<endl;
	}
	
	return 0;
}
