#include<bits/stdc++.h>
using namespace std;
int main()
{
	float n,fy;
	cout<<"��ӭʹ�ó��⳵�Ʒ����"<<endl;
	cout<<"3ǧ�����𲽼�4Ԫ������3ǧ�׵Ĳ���ÿǧ��2Ԫ��"<<endl;
	cout<<"������ǧ����:";
	cin>>n;
	if(n<=3)fy=4;
	else fy=4.0+(n-3.0)*2.0;
	cout<<"����Ϊ:";
	printf("%.2f",fy);
	cout<<"Ԫ"<<endl; 
	system("pause");
	return 0;
}
