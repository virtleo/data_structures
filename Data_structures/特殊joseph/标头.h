#pragma once
#pragma once
#include<iostream>
using namespace std;
typedef struct joseph {
	int data;
	struct joseph* next;
		joseph* prior;
};
joseph* creatcircle(int n);
void findjoseph(joseph* prehead, int first, int code);