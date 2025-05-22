#include"БъЭЗ.h"

int main()
{
	cout << "please input the number of the people" << endl;
	int n, code;
	cin >> n;
	cout << "the code is" << endl;
	cin >> code;
	joseph* one = creatcircle(n);
	findjoseph(one, 1, code);
	return 0;

}