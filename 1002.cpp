#include<iostream>
using namespace std;

int main()//�������ӷ�
{
	string num1,num2;

	while(cin>>num1>>num2)
{
	string res="";
	int len1=num1.size(); 
	int len2=num2.size();
	//�̵��ַ����� 0 
	if(len1>len2)
		num2.insert(num2.begin(),len1-len2,'0');
	else if(len1<len2)
		num1.insert(num1.begin(),len2-len1,'0');
		
	int cbit=0;//��λ 
	for(int i=num1.size()-1;i>=0;i--){
		
		int sum=(num1[i]-'0')+(num2[i]-'0')+cbit;//��Ӧλ֮�� + ��λ 
		if(cbit)//��λ��� 
			cbit--;
		res.insert(res.begin(),(sum%10)+'0');//ǰ�� 
		if(sum/10)//�н�λ 
			cbit++;
	} 
	if(cbit)
	cout<<cbit;
	cout<<res<<endl;
	}
}
