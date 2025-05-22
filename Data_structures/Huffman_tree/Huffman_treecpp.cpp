#include "Huffman_tree.h"

void CreatHuffmanTree(HuffmanTree& HT, int* w, char* data, int n)
{
	int i, p1, p2;
	HT.elem = new HTNode[2 * n - 1];
	for (int i = 0; i < n; i++) {
		HT.elem[i].weight = w[i];
		HT.elem[i].data = data[i];
	}
	HT.size = n;
	for (int i = 0; i < 2 * n - 1; i++) {
		HT.elem[i].parent = -1;
		HT.elem[i].lchild = -1;
		HT.elem[i].rchild = -1;
	}
	for (int i = n; i < n * 2 - 1; i++) {
		SelectMin1Min2(HT, p1, p2);
		HT.elem[p1].parent = HT.elem[p2].parent = i;
		HT.elem[i].lchild = p1;
		HT.elem[i].rchild = p2;
		HT.elem[i].weight = HT.elem[p1].weight + HT.elem[p2].weight;
		HT.elem[i].data = '\0';
		HT.size++;
	}

}

void SelectMin1Min2(HuffmanTree& HT, int& p1, int& p2)
{
	int i, min1, min2;
	min1 = min2 = INT_MAX;
	for (int i = 0; i < HT.size; i++) {
		if (HT.elem[i].parent == -1) {
			if (HT.elem[i].weight < min1) {
				min2 = min1;
				p2 = p1;
				min1 = HT.elem[i].weight;
				p1 = i;
			}
			else {
				min2 = HT.elem[i].weight;
				p2 = i;
			}
		}
	}

}


void Init(Linkstack& L)
{
	L = NULL;
}

bool Push(Linkstack& L, int e)
{
	StackNode* s = new StackNode;
	s->data = e;
	s->next = L;
	L = s;
	return true;
}

bool Pop(Linkstack& L, int& e)
{
	if (IsEmpty(L)) return false;
	StackNode* s = L;
	L = s->next;
	e = s->data;
	delete s;
	return true;
}

bool GetTop(Linkstack& L, int& e)
{
	if (IsEmpty(L)) return false;
	e = L->data;
	return true;
}

void Traverse(Linkstack L)
{
	StackNode* p = L;
	while (p) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}


void Destroy(Linkstack& L)
{
	StackNode* p = L, * s;
	while (p) {
		s = p;
		p = p->next;
		delete s;
	}
}

bool IsEmpty(Linkstack& L)
{
	return (L == NULL);
}

void EncodeHT(HuffmanTree HT, Linkstack& S)
{
	int i, p, R, n = (1 + HT.size) / 2;
	for (i = 0; i < n; i++) {
		p = i;
		R = HT.elem[p].parent;
		while (1) {
			if (HT.elem[R].lchild == p) {
				Push(S, 0);
			}
			else {
				Push(S, 1);
			}
			p = R;
			R = HT.elem[R].parent;
			if (R == -1) {
				break;
			}
		}
		cout << HT.elem[i].data << ":";
		while (!IsEmpty(S)) {
			Pop(S, p);
			cout << p;
		}
		cout << endl;
	}
}



int GetHTWPL(HuffmanTree HT)
{
	int i, n = (1 + HT.size) / 2, R, pl = 0;
	float WPL = 0;
	for (i = 0; i < n; i++) {
		R = HT.elem[i].parent;
		pl = 1;
		while (R != -1) {
			R = HT.elem[R].parent;
			pl++;
		}
		WPL += HT.elem[i].weight;
	}
	return WPL;
}

void DecodeHT(HuffmanTree HT, const string& seq) {
	int i = 0, p = HT.size - 1;
	while (i < seq.length()) {
		if (seq[i] == '0') {
			p = HT.elem[p].lchild;
		}
		else {
			p = HT.elem[p].rchild;
		}
		if (HT.elem[p].lchild == -1 && HT.elem[p].rchild == -1) {
			cout << HT.elem[p].data;
			p = HT.size - 1;
		}
		i++;
	}
	cout << endl;
}

void EncodeT(const string& ybw, string& code)
{
	int l = ybw.length();
	for (int i = 0; i < l; i++) {
		switch (ybw[i]) {
		case 'A':code = code + "10"; break;
		case 'B':code = code + "1110"; break;
		case 'D':code = code + "0"; break;
		case 'F':code = code + "110"; break;
		case 'K':code = code + "11110"; break;
		case 'S':code = code + "11111"; break;
		defaul:break;
		}
	}
}
