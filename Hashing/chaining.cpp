#include<bits/stdc++.h>
#include "chains.h"

using namespace std;

int Hash(int key)
{
    return key % 10;
}

void insert(struct Node * H[], int key)
{
    int index=Hash(key);
    sorted_insert(&H[index], key);
}

int main()
{
    struct Node *HT[10];
    struct Node *temp;

    for(int i=0; i<10; i++)
    {
        HT[i]=NULL;
    }
    insert(HT, 12);
    insert(HT, 22);
    insert(HT, 42);

    temp=search(HT[Hash(22)], 22);

    cout<<temp->data;

    return 0;
}