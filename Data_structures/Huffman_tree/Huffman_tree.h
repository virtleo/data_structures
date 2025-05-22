#pragma once
#include<iostream>
#include <limits.h>
#include <string>
#include <unordered_map>
using namespace std;

#define N 100
struct HTNode {
	char data;
	float weight;
	int parent, lchild, rchild;
};

typedef struct {
	HTNode* elem;
	int size;
}HuffmanTree;

typedef struct StackNode {
	int data;
	StackNode* next;
}*Linkstack;
void Init(Linkstack& L);
bool Push(Linkstack& L, int e);
bool Pop(Linkstack& L, int& e);
bool GetTop(Linkstack& L, int& e);
void Traverse(Linkstack L);
void Destroy(Linkstack& L);
bool IsEmpty(Linkstack& L);

unordered_map<char, int> GetCharFrequency(const string& s);

void CreatHuffmanTree(HuffmanTree& HT, int* w, char* data, int n);
void SelectMin1Min2(HuffmanTree& HT, int& p1, int& p2);

void EncodeHT(HuffmanTree HT, Linkstack& S);

int GetHTWPL(HuffmanTree HT);

void DecodeHT(HuffmanTree HT, const string& seq);
void EncodeT(const string& ybw, string& code);
