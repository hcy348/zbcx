#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int c,d,i;
	srand(time(0));
	cout<<"电脑说鸡蛋你说要"<<endl;
	while(1)
	{
		c=rand()%50+1;
		d=rand()%50+1;
		if(c%2==0&&d==1)
		{
			cout<<"鸡蛋"<<endl;
			cin>>a;
			if(a=="要")cout<<"给你"<<endl; 
			if(a=="退出")break;
		}
		else 
		  for(i=1;i<=d;i++)
		    cout<<"鸡蛋";
		  cout<<endl;
		  cin>>a;
		  if(a=="要")cout<<"蛋碎了"<<endl;
		  else if(a=="不要")cout<<"鸡蛋没有碎"<<endl;
		  if(a=="退出")break;	 
	}
	system("pause");
	return 0;
}
