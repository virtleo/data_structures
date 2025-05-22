#pragma once
#include<iostream>
#include<string>
/*我使用的是定长数据结构，即数组*/
using namespace std;
const int maxsize = 100;
typedef struct hstring {
	char* ch;
	int len;
};
void init(hstring& s);
int length(hstring& s);
void clear(hstring& s);
int bf(hstring s, hstring t, int pos);
