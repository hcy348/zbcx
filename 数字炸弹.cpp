#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b=1;
	cout<<"����ը��"<<endl;
	while(1)
	{
		cout<<"����һ��"<<b<<"-100������";
		cin>>a;
		if(a==-1)break;
		if(a==99)
		{
			cout<<"����һ��"<<b<<"-99������";
			cin>>a; 
		} 
		if(a<=b)cout<<"��ȵ���ը��"<<endl; 
		else if(a>=100)cout<<"��ȵ���ը��"<<endl;
		     else 
			   cout<<"��û�вȵ�ը��"<<endl;
			   b=a; 
	}
	system("pause");
	return 0;
} 
