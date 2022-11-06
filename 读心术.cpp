#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"读心术"<<endl;
	cout<<"你在心里想一个1-7的数"<<endl;
	system("pause");
	system("cls");
	cout<<"1 3 5 7 这几个数里有吗？1：有 0：没有"<<endl;
	cin>>a;
	system("cls");
	cout<<"2 3 6 7 这几个数里有吗？1：有 0：没有"<<endl;
	cin>>b;
	system("cls");
	cout<<"4 5 6 7 这几个数里有吗？1：有 0：没有"<<endl;
	cin>>c;
	system("cls");
	d=4*c+2*b+a;
	cout<<"你想的数是"<<d<<endl;
	system("pause");
	return 0; 
}
