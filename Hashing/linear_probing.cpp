/* In this program we will implement linear probing
   hashing technique */

#include<bits/stdc++.h>
// #include<stdint.h>
#define SIZE 10
using namespace std;

// Function returns hash of the key
// using modulo arithmatic
int Hash(int key)
{
    return key%SIZE;
}

// Returns linear probing
// using h'(x) = [h(x) + f(i)], where f(i) = i, i=0,1,2,3,......

int probe(int H[], int key)
{
    // calculate hash function
    int index=Hash(key);

    // start i with 0
    int i=0;

    // check if any elemnt is present at that index or not
    // if present increment i...
    while(H[(index+i)%SIZE]!=0)
    {
        i++;
    }
    // and finally return index mod size
    return (index+i)%SIZE;
}

// Function inserts the key to the hash table using linear probing
void insert_in_hash_table(int H[], int key)
{
    int index=Hash(key);

    if(H[index]!=0)
    {
        index=probe(H,key);
    }
    H[index]=key;
}

// Searching can be done using linear probing using abouve given formula
int search_in_hash_table(int H[],int key)
{
    int index=Hash(key);

    int i=0;

    while(H[(index+i)%SIZE]!=key)
    {
        i++;
    }
    return (index+i)%SIZE;
}

int main()
{
    int HT[10]={0};

    insert_in_hash_table(HT,12);
    insert_in_hash_table(HT,25);
    insert_in_hash_table(HT,35);
    insert_in_hash_table(HT,26);
    insert_in_hash_table(HT,46);

    /* int s_key;
    cin>>s_key; */
    cout<<"\nKey found at: "<<search_in_hash_table(HT, 46)<<endl;

    return 0;
}