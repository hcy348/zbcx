#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i=1;
	cout<<"����7����"<<endl; 
	cout<<"��1��ʼ�����������7�ı������߰���7��������"<<endl;
	while(1)
	{
		cin>>a;
		if(a==-1)break;
		if(i==1&&a!=1)
		{
			cout<<"���벻��ȷ"<<endl;
			continue; 
		}
		else if(a%7==0)
			 {
				cout<<a<<"��7�ı����������ˣ�"<<endl;
				break; 
			 }
			 if(a%10==7)
			 {
			 	cout<<a<<"����7�������ˣ�"<<endl;
			 } 
			 else if(a!=i)
			      {
			      	cout<<"���벻��ȷ"<<endl;
					continue; 
				  } 
		b=a+1;
		while(1)
		{
			if(b%7==0||b%10==7)b++;
			else break;
		}
		cout<<"��˵"<<b<<endl;
		i=b+1;
		while(1)
		{
			if(i%7==0||i%10==7)i++;
			else break;
		}
	}
	system("pause");
	return 0;
}
