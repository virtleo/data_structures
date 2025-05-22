#include"薯片.h"
int main()
{
	string input;
	cin >> input;
	shupian shu[100];
	int q = 1;
	for (int i = 0; i < (input.length()+1); i=i+3)
	{

		int s = input[i + 1] - '0';
		
		for (int j = 0; j < s; j++)
		{
			shu[q-1].ch = input[i];
			shu[q-1].bianhao = q;
			q++;
		}
	}
	stack<int> G,D;
	stack<int>::linkstack g,d;
	G.initstack(g);
	D.initstack(d);
	for (int i = q-1; i >0; i--)
	{
		if ((i % 2 == 1))
		{
			cout << "哥哥拿到" << i << "号";
			if (shu[i-1].ch == 'N')
				cout << "薯片，是普通薯片，吃掉它"<<endl;
			else
				cout << "特殊薯片，跟弟弟炫耀，放一边" << endl;
		}
		else
		{
			cout << "弟弟拿到" << i << "号";
			if (shu[i-1].ch == 'N')
				cout << "薯片，是普通薯片，吃掉它" << endl;
			else
				cout << "特殊薯片，跟哥哥炫耀，放一边" << endl;
		}
	}
	
	for (int i = 0; i < q - 1; i++)
	{
		if ((shu[i].ch == 'S') && (i % 2 == 0))
			G.push(g, i+1);
		if (((shu[i].ch == 'S') && (i % 2 == 1)))
			D.push(d, i+1);
	}
	q = 1;
	int e;
	while (!G.isempty(g) && (!D.isempty(d)))
	{
		if (q % 2 == 1)
		{
			G.pop(g, e);
			cout << "哥哥拿出他前面的" << e << "号特殊薯片，再次炫耀一番，并吃掉它"<<endl;
		}
		else
		{
			D.pop(d, e);
			cout << "弟弟拿出他前面的" << e << "号特殊薯片，再次炫耀一番，并吃掉它"<<endl;

		}
		q++;
	}
	if (G.isempty(g))
	{
		D.pop(d, e);
		cout << "弟弟拿出他前面的" << e << "号特殊薯片，再次炫耀一番，并吃掉它" << endl;
		cout << "哥哥没有薯片了，泪崩~" <<  endl;
		while (!D.isempty(d))
		{
			D.pop(d, e);
			cout << "弟弟拿出他前面的" << e << "号特殊薯片，再次炫耀一番，并吃掉它" << endl;

		}
	}
	else
	{
		G.pop(g, e);
		cout << "哥哥拿出他前面的" << e << "号特殊薯片，再次炫耀一番，并吃掉它" << endl;
		cout << "弟弟没有薯片了，泪崩~" << endl;
		while (!G.isempty(g))
		{
			G.pop(g, e);
			cout << "哥哥拿出他前面的" << e << "号特殊薯片，再次炫耀一番，并吃掉它" << endl;

		}
	}



	
	return 0;
}