#include "Chain_queue.h"
#include<iomanip>
int main()
{
	linkqueue L;
	initqueue(L);
	//tiaoshi(L);//将调试代码封装进函数tiaoshi中
	int n=10;
	elemtype s=0, t=1;
	enqueue(L, s);
	enqueue(L, t);
	enqueue(L, s);
	cout << setw(n * 2+1) << "";
	traverse(L);
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		int space = n - i;
		cout <<setw(space * 2) << "";

		while (true)
		{
			dequeue(L, s);
			getfront(L, t);
			enqueue(L, s + t);
			if (t == 0)
			{
				enqueue(L, 0);
				break;
			}
		}
		
		traverse(L);
		cout << endl;
	}
	
	return 0;
}