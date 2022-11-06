#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b=1;
	cout<<"数字炸弹"<<endl;
	while(1)
	{
		cout<<"输入一个"<<b<<"-100的数：";
		cin>>a;
		if(a==-1)break;
		if(a==99)
		{
			cout<<"输入一个"<<b<<"-99的数：";
			cin>>a; 
		} 
		if(a<=b)cout<<"你踩到了炸弹"<<endl; 
		else if(a>=100)cout<<"你踩到了炸弹"<<endl;
		     else 
			   cout<<"你没有踩到炸弹"<<endl;
			   b=a; 
	}
	system("pause");
	return 0;
} 
