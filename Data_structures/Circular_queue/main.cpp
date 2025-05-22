#include "Circular_queue.h"
#include<fstream>
int main()
{
	seqqueue mq,fq;
	initqueue(mq);
	initqueue(fq);
	//tiaoshi(L);//将调试代码封装进函数tiaoshi中
	person dancerm[7];
	person dancerf[10];
	ifstream inputfilem("./personm.txt");
	ifstream inputfilef("./personf.txt");
	if ((!inputfilem)&&(!inputfilef))
	{
		cerr << "error : not open the file" << endl;
	}
	for (int i = 0; i < 7; i++)
	{
		inputfilem >> dancerm[i].name >> dancerm[i].sex;
		enqueue(mq, dancerm[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		inputfilef >> dancerf[i].name >> dancerf[i].sex;
		enqueue(fq, dancerf[i]);
	}
	inputfilem.close();
	inputfilef.close();
	person p;
	while (!isempty(mq) && !isempty(fq))
	{
		dequeue(mq, p);
		cout << p.name << " ";
		dequeue(fq, p);
		cout << p.name << endl;
	}
	if (!isempty(mq))
	{
		getfront(mq, p);
		cout << "first M:" << p.name;
	}
	else if (!isempty(fq))
	{
		getfront(fq, p);
		cout << "first F:" << p.name;
	}
	return 0;
}