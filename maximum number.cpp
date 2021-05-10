#include<iostream>
using namespace std;
int main()
{
	int a,i,p=0;
	for(i=1;i<=5;i++)
	{
		cout<<"enter the number";
		cin>>a;
		if(p<a)
		{
			p=a;
		}
	}
	cout<<"the maximun number is :"<<p;
	return 0;
}
