#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for (int i = 0; i < 7; i++)
	{
		cout << setw(19 - i) << setfill(' ') << " " << setw(2 * i + 1) << setfill('A') << 'A' << endl;
	}
	return 0;
}