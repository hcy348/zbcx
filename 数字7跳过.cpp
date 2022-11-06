#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i=1;
	cout<<"数字7跳过"<<endl; 
	cout<<"从1开始数，如果数是7的倍数或者包含7的数跳过"<<endl;
	while(1)
	{
		cin>>a;
		if(a==-1)break;
		if(i==1&&a!=1)
		{
			cout<<"输入不正确"<<endl;
			continue; 
		}
		else if(a%7==0)
			 {
				cout<<a<<"是7的倍数，你输了！"<<endl;
				break; 
			 }
			 if(a%10==7)
			 {
			 	cout<<a<<"包含7，你输了！"<<endl;
			 } 
			 else if(a!=i)
			      {
			      	cout<<"输入不正确"<<endl;
					continue; 
				  } 
		b=a+1;
		while(1)
		{
			if(b%7==0||b%10==7)b++;
			else break;
		}
		cout<<"我说"<<b<<endl;
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
