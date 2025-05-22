#include"Max_value.h"
#include<fstream>
int main()
{
	ifstream inputfile("./test.txt");
	if (!inputfile)
	{
		cerr << "error" << endl;
	}
	int a;
	stack<int> sop;
	stack<int>::linkstack s;
	sop.initstack(s);
	for (int i = 0; i < 6; i++)
	{
		if (!(inputfile >> a))
			cerr << "error" << endl;
		sop.push(s, a);

	}
	cout << sop.max_value(s);
	sop.destroy(s);
	return 0;
	
}