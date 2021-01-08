#include<iostream>
#include<string> 
using namespace std;
int main()
{
	string arr;
	while(getline(cin,arr))
	{
	int length1=arr.length();
	for(int i=0;i<length1;i++)
	{
		if(arr[i]>='A'&&arr[i]<='Z'&&arr[i]!='X')
		{
			arr[i]=arr[i]+'a'-'A';
		}
	}
	cout<<arr<<endl;
 	} 
}
