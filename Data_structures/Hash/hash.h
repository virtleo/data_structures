#pragma once
#include<iostream>
using namespace std;
typedef int keytype;
struct hashnode {
	keytype key;
	hashnode* next;
};
const int m = 10;
typedef hashnode* HashTable[10];
bool is_prime(int x);
int max_prime(int n);
int Hash(keytype key, int p);
bool Find(HashTable& H, keytype key, bool flag);
void PrintHashTable(HashTable& HT);