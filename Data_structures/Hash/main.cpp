#include "hash.h"
int main()
{
	HashTable ht = {nullptr};
	keytype arr[] = { 17,29,33,12,89,25,26,77,15,55 };
	for (int i = 0; i < 10; i++)
	{
		Find(ht, arr[i], true);
	}
	if (Find(ht, 25, false)) {
		cout << "25 found in hash table." << endl;
	}
	else {
		cout << "25 not found in hash table." << endl;
	}
	PrintHashTable(ht);
	return 0;
}