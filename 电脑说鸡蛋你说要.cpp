#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int c,d,i;
	srand(time(0));
	cout<<"����˵������˵Ҫ"<<endl;
	while(1)
	{
		c=rand()%50+1;
		d=rand()%50+1;
		if(c%2==0&&d==1)
		{
			cout<<"����"<<endl;
			cin>>a;
			if(a=="Ҫ")cout<<"����"<<endl; 
			if(a=="�˳�")break;
		}
		else 
		  for(i=1;i<=d;i++)
		    cout<<"����";
		  cout<<endl;
		  cin>>a;
		  if(a=="Ҫ")cout<<"������"<<endl;
		  else if(a=="��Ҫ")cout<<"����û����"<<endl;
		  if(a=="�˳�")break;	 
	}
	system("pause");
	return 0;
}
