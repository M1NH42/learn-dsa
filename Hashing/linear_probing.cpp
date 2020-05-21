/* In this program we will implement linear probing
   hashing technique */

#include<bits/stdc++.h>
// #include<stdint.h>
#define SIZE 10
using namespace std;

int Hash(int key)
{
    return key%SIZE;
}

int probe(int H[], int key)
{
    int index=Hash(key);
    int i=0;
    while(H[(index+i)%SIZE]!=0)
    {
        i++;
    }
    return (index+i)%SIZE;
}

void insert_in_hash_table(int H[], int key)
{
    int index=Hash(key);

    if(H[index]!=0)
    {
        index=probe(H,key);
    }
    H[index]=key;
}

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