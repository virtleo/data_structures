#include<iostream>
using namespace std;
template<typename T>
T miin(T a, T b,T c)
{
	return (a < b ? a : b)<c ? (a < b ? a : b) : c;
}
int main()
{
	cout<<miin(3,5,7)<<endl;
	cout<<miin(5.5,2.2,8.8)<<endl;
	cout<<miin('a','z','c')<<endl;
	return 0;
}