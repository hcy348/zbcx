#include<bits/stdc++.h>
using namespace std;
int main()
{
	float n,fy;
	cout<<"欢迎使用出租车计费软件"<<endl;
	cout<<"3千米内起步价4元，超过3千米的部分每千米2元。"<<endl;
	cout<<"请输入千米数:";
	cin>>n;
	if(n<=3)fy=4;
	else fy=4.0+(n-3.0)*2.0;
	cout<<"费用为:";
	printf("%.2f",fy);
	cout<<"元"<<endl; 
	system("pause");
	return 0;
}
