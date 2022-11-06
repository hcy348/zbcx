#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,i;
	srand(time(0));
	cout<<"拯救小猪"<<endl;
	cout<<"有20只小猪，掉进陷井了"<<endl;
	for(i=1;i<=10;i++)
	{
		a=rand()%19+1;
		b=20-a;
		cout<<"有20只小猪，一个陷井里有"<<a<<"只小猪，另一个陷井里有几只小猪？"<<endl;
		cin>>c;
		if(c==b)cout<<"答对了"<<endl;
		else cout<<"答错了"<<endl;
		cout<<"20可以分成"<<a<<"和"<<b<<endl; 
	}
	cout<<"小猪得救了"<<endl; 
	system("pause");
	return 0;
} 
