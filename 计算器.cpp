#include<bits/stdc++.h>
using namespace std;
void jiafa(void)
{
	int n1,n2,sum;
	cout<<"主页>加法"<<endl;
	cout<<endl;
	cout<<"输入两个数：";
	cin>>n1>>n2;
	system("cls");
	sum=n1+n2;
	cout<<n1<<'+'<<n2<<'='<<sum<<endl;
}
void jianfa(void)
{
	int n1,n2,sum;
	cout<<"主页>减法"<<endl;
	cout<<endl;
	cout<<"输入两个数：";
	cin>>n1>>n2;
	system("cls");
	sum=n1-n2;
	cout<<n1<<'-'<<n2<<'='<<sum<<endl;
}
void chengfa(void)
{
	int n1,n2,sum;
	cout<<"主页>乘法"<<endl;
	cout<<endl;
	cout<<"输入两个数：";
	cin>>n1>>n2;
	system("cls");
	sum=n1*n2;
	cout<<n1<<"×"<<n2<<'='<<sum<<endl;
}
void chufa(void)
{
	int n1,n2,sum;
	cout<<"主页>除法"<<endl;
	cout<<endl;
	cout<<"输入两个数：";
	cin>>n1>>n2;
	system("cls");
	sum=n1/n2;
	if(n1%n2==0)cout<<n1<<"÷"<<n2<<'='<<sum<<endl;
	else cout<<n1<<"÷"<<n2<<'='<<sum<<"......"<<n1%n2<<endl;
}
void zhuye(void)
{
	int n;
	cout<<"主页"<<endl;
	cout<<endl;
	cout<<"1、加法 2、减法 3、乘法 4、除法"<<endl;
	cin>>n; 
	switch(n)
	{
		case 1:system("cls");jiafa();break;
		case 2:system("cls");jianfa();break;
		case 3:system("cls");chengfa();break;
		case 4:system("cls");chufa();break;
	}
}
int main()
{
	zhuye(); 
	system("pause"); 
	return 0;   		  
} 
