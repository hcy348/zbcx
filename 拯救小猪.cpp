#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,i;
	srand(time(0));
	cout<<"����С��"<<endl;
	cout<<"��20ֻС�������ݾ���"<<endl;
	for(i=1;i<=10;i++)
	{
		a=rand()%19+1;
		b=20-a;
		cout<<"��20ֻС��һ���ݾ�����"<<a<<"ֻС����һ���ݾ����м�ֻС��"<<endl;
		cin>>c;
		if(c==b)cout<<"�����"<<endl;
		else cout<<"�����"<<endl;
		cout<<"20���Էֳ�"<<a<<"��"<<b<<endl; 
	}
	cout<<"С��þ���"<<endl; 
	system("pause");
	return 0;
} 
