#include "БъЭЗ.h"

joseph* creatcircle(int n)
{
	joseph* head, * p1, * p2;
	int i;
	head = p1 = p2 = (joseph*)malloc(sizeof(joseph));
	for (i = 1; i < n; i++)
	{
		joseph* s = new joseph;
		cin >> s->data;
		p1->next = p2;
		
		
		p1->data = i;
		
	}
	p1->data = n;
	p1->next = head;
	p1 = head;
	return p2;
}

void findjoseph(joseph* prehead, int first, int code)
{
	int i;
	joseph* p1, * p2;
	p1 = prehead;
	cout << "the order is:" << endl;
	for (i = 1; i <= first; i++)
	{
		p1 = p1->next;
	}
	first = code;
	while (p1->next != p1)
	{
		for (i = 1; i < first - 1; i++)
		{
			p1 = p1->next;
		}
		p2 = p1->next;
		cout << p2->data << " ";
		//if (p2->data % 2 == 1)

			p1->next = p2->next;
			p1 = p1->next;
			free(p2);



	}
	cout << endl;
	cout << "joseph is " << p1->data;
	free(p1);
}
