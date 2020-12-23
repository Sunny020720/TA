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
		array.push_back(num);//每输入一个数字就把它添加到数组最后 
		
		
		if (cin.get() == '\n')//如果是回车则跳出循环
		break; 
	}
	
	
	int len = array.size();
	
	
	for (int i = 0;i < len; i++)
	{
		cout<<array[i]<<endl;
	}
	
	return 0;
}
