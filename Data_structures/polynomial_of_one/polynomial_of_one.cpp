#include "polynomial_of_one.h"

void createpolyn(polynomial& L, int n)
{
	L = new pnode;
	L->next = NULL;
	pnode* r = L;

	for (int i = 0; i < n; i++)
	{
		pnode* p = new pnode;
		cin >> p->coef>> p->exp;
		p->next = NULL;
		r->next = p;
		r = p;
	}
}

void orderinsert(polynomial& L, int n)
{
	//输入m项的系数和指数，建立表示多项式的有序链表P
	L = new pnode;
	L->next = NULL; //先建立一个带头结点的单链表
	for (int i = 1; i <= n; ++i)
	{ //依次输入n个非零项
	pnode* s = new pnode; //生成新结点
	cin >> s->coef >> s->exp;//输入系数和指数
	pnode *pre = L; //pre用于保存q的前驱，初值为头结点
	pnode *q = L->next; //q初始化，指向首元结点
	while (q && q->exp < s->exp) { //找到第一个大于输入项指数的项*q
		pre = q;
		q = q->next;
		} //while 
		s->next = q; //将输入项s插入到q和其前驱结点pre之间
		pre->next = s;
	}
}

void add(polynomial& a, polynomial& b, polynomial& c)
{
	pnode* pa, * pb, * pc, * p;
	//P指向被删除节点，pa,pb为当前节点或工作节点
	c = pc = a;
	pa = a->next;
	pb = b->next;
	delete b;
	while (pa && pb) 
	{
		if (pa->exp == pb->exp) 
		{ 
			pa->coef = pa->coef + pb->coef;
			p = pb;
			pb = pb->next;
			delete p;
			if (pa->coef)
			{
				pc->next = pa;
				pc = pa;
				pa = pa->next;
			}
			else
			{
				p = pa;
				pa = pa->next;
				delete p;
			}
		}
		else if (pa->exp > pb->exp) 
		{
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
		else 
		{
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
	}
	pc->next = pa ? pa : pb;
}
polynomial fanzhuan(polynomial &b)
{
	polynomial newHead = new pnode;
	newHead->next = NULL;
	pnode* tail = newHead;
	pnode* p = b->next;
	while (p) {
		pnode* newNode = new pnode;
		newNode->coef = -p->coef;
		newNode->exp = p->exp;
		newNode->next = NULL;
		tail->next = newNode;
		tail = newNode;
		p = p->next;
	}
	return newHead;
};
void sub(polynomial& a, polynomial& b, polynomial& c)
{
	
	pnode* pa, * pb, * pc, * p;
	//P指向被删除节点，pa,pb为当前节点或工作节点
	c = pc = a;
	pa = a->next;
	pnode* q = fanzhuan(b);
	pb = q->next;
	delete b;
	while (pa && pb)
	{
		if (pa->exp == pb->exp)
		{
			pa->coef = pa->coef + pb->coef;
			p = pb;
			pb = pb->next;
			delete p;
			if (pa->coef)
			{
				pc->next = pa;
				pc = pa;
				pa = pa->next;
			}
			else
			{
				p = pa;
				pa = pa->next;
				delete p;
			}
		}
		else if (pa->exp > pb->exp)
		{
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
		else
		{
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
	}
	pc->next = pa ? pa : pb;
}

void traverse(polynomial& L)
{
	if (!L) {
		cout << "0" << endl;
		return;
	}

	pnode* p = L->next;    
	bool firstTerm = true;

	while (p) {
		if (!firstTerm && p->coef > 0) {
			cout << "+";
		}

		if (p->coef != 1 && p->coef !=-1 || p->exp == 0) {

			cout << p->coef;

			
		}
		if (p->coef == -1)
		{
			cout << "-";
		}

		if (p->exp == 0) {
			// 常数项  
		}
		else if (p->exp == 1)
		{
			cout << "x";
		}
		else {
			cout << "x^" << p->exp;
		}

		firstTerm = false;
		p = p->next;
	}

	cout << endl;
}

void reverse(polynomial& L)
{
	pnode* p = L->next, * q;
	L->next = NULL;
	while (p) {
		q = p;
		p = p->next;
		q->next = L->next;
		L->next = q;
	}
}

float evaluate(polynomial& L, float x)
{
	float rst = 0;
	pnode * p = L->next;
	if (p) rst = p->coef;
	while (p) {
		if (p->next)
			rst = rst * pow(x, p->exp - p->next->exp) + p->next->coef;
		else
			rst = rst * pow(x, p->exp);
		p = p->next;
	}
	return rst;
}
