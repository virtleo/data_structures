#include "hash.h"

bool is_prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;  
        }
    }
    return true;  
}

int max_prime(int n) {
    for (int i = n - 1; i > 1; i--) {
        if (is_prime(i)) {
            return i; 
        }
    }
    return -1;
}

int Hash(keytype key, int p)
{
    return key % p;
}

bool Find(HashTable& H, keytype key, bool flag)
{
    int Hx = Hash(key,5);
    hashnode* p = H[Hx];
    while (p && p->key != key)
    {
        p = p->next;
    }
    if (!p)
    {
        if (flag)
        {
            hashnode* s = new hashnode;
            s->key = key;
            s->next = H[Hx];
            H[Hx] = s;
            return true;
        }
        else
            return false;
    }
    return true;
}
void PrintHashTable(HashTable& HT) {
    for (int i = 0; i < 10; i++) {
        cout << "HT[" << i << "]: ";
        hashnode* p = HT[i];
        while (p) {
            cout << p->key << " -> ";
            p = p->next;
        }
        cout << "NULL" << endl;
    }
}

