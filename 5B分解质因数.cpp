//5B分解质因数
 #include<iostream>
 using namespace std;
 int main()
 {
 	int n,i,j,p,q;cin>>n;
 	for(i=0;i<n;i++)
 	{
 		int num;cin>>num;//输入数字 
 		int zs[100]={0};
 			for(p=2;p<num;p++)
			 {
			 	while(num!=p) 
			 	{
			 	if(num%p==0) //p是num的因数 
				 {cout<<p<<"*";
				  num=num/p;
				  } 
				 else {break;//到下一个质因数 
				 }
			  } 
		}cout<<num<<endl;
}
}

   
