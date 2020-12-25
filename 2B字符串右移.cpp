//B
#include<iostream>
#include<string>

using namespace std;
int main()
{
	int M,i,j=0;
	string str1; 
	cin>>M;
	getline(cin,str1);
    int length1 = str1.length();
	char a[length1 + 1]={0};
    for(i=M;i<length1;i++)
    {
    	a[i] = str1[j] ;j++;
	}
	int p = length1 - M;
	for(i=0;i<M;i++)
	{
		a[i] = str1[p];p++; 
	}
	for(i=0;i<length1;i++)
	{
		cout<<a[i];
	}
	
	return 0;
}
