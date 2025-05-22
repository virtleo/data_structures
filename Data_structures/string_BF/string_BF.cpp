#include "string_BF.h"
/*我使用的是定长数据结构，即数组*/
void init(hstring& s)
{
	s.ch = new char[maxsize];
	s.len = 0;
	s.ch[0] = '\0';
}

int length(hstring& s)
{

	return s.len;
}

void clear(hstring& s)
{
	if (s.ch)
		delete[]s.ch;
	s.ch = NULL;
	s.len = 0;
}

int bf(hstring s, hstring t, int pos)
{
	int i = pos;
	int j = 1;
	while (i <= s.len && j <= t.len)
	{
		if (s.ch[i-1] == t.ch[j-1])
		{
			++i;
			++j;
		}
		else
		{
			i = i - j + 2;
			j = 1;
		}
	}
	if (j > t.len)
		return i - t.len;
	else
		return 0;
}
