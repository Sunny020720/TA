//5B�ֽ�������
 #include<iostream>
 using namespace std;
 int main()
 {
 	int n,i,j,p,q;cin>>n;
 	for(i=0;i<n;i++)
 	{
 		int num;cin>>num;//�������� 
 		int zs[100]={0};
 			for(p=2;p<num;p++)
			 {
			 	while(num!=p) 
			 	{
			 	if(num%p==0) //p��num������ 
				 {cout<<p<<"*";
				  num=num/p;
				  } 
				 else {break;//����һ�������� 
				 }
			  } 
		}cout<<num<<endl;
}
}

   
