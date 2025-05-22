#include <iostream>
using namespace std;
int &f(int &i)
{
	i+=10;
	return i;
}
int main ()
{
	int a=0;
	int &m=f(a);
	cout<<a<<endl;
	m=20;
	cout <<a<<endl;
	return 0;
}