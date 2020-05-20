/* This is the implementation of the heap  */

#include<bits/stdc++.h>
using namespace std;

void insert_element(int H[], int n)
{
    int temp, i=n;
    temp=H[n];

    while(i>1 && temp>H[i/2])
    {
        H[i]=H[i/2];
        i=i/2;
    }
    H[i]=temp;
}

void create_heap(int H[], int n)
{
    for(int i=2;i<=7;i++)
    {
        insert_element(H,i);
    }
}

int main()
{
    int H[]={0,10,20,30,25,5,40,35};

    create_heap(H,7);

    for(int i=1;i<=7;i++)
    {
        cout<<H[i]<<" ";
    }
    cout<<endl;

    return 0;
}