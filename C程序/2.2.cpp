#include<iostream>
using namespace std;
int main()
{
	int a,b,d,min;
	cout<<"enter two numbers:"<<endl;
	cin>>a>>b;
	min=a>b?a:b;
	for (d=2;d<min;d++)
		if(((a%d)==0)&&((b%d)==0))
		break;
	if (d==min)
	{
		cout<<"no common denominators"<<'\n'<<endl;
		return 0;
	}
	cout<<"the lowest common denominator is "<<d<<endl;
	return 0;
}
//this is my first project /*hello world*/