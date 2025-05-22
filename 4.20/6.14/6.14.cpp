#include<iostream>
using namespace std;
template<class T>
class sum
{
private:
	T a,b,c;
public:
	sum(T x,T y,T z)
	{
		a=x;
		b=y;
		c=z;
	}
	T sum1()
	{
		return a+b+c;
	}
	T average();
};
template<typename T>
T sum<T>::average()
{
	return (a+b+c)/3.0;
}
int main()
{
	sum<int> s1(10,20,30);
	sum<float> s2(1.5,2.5,3.5);
	cout<<"Sum of integers is: "<<s1.sum1()<<endl;
	cout<<"Sum of floats is: "<<s2.sum1()<<endl;
	cout<<"Average of integers is: "<<s1.average()<<endl;
	cout<<"Average of floats is: "<<s2.average()<<endl;
	return 0;
}