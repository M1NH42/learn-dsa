/*
    * Will see working of different special matrices which have lots of zeroes
    * stored with them and we'll see their working one by one
*/

#include<bits/stdc++.h>
using namespace std;

// sets the value x if i==j i.e. diagonal element
void Set(int a[], int i, int j, int x)
{
    if(i==j) // checks if diagonal element
    {
        a[i-1] = x; // store at i-1 because at (1,1) present at '0' index of an array
    }
}

int Get(int a[], int i, int j)
{
    if(i==j)
    {
        return a[i-1];
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int dm[5];

    int i,j,element;
    
    for(int i=1; i<=5; i++)
    {
        cin>>i;
        cin>>j;
        cin>>element;
    }

    Set(dm,i,j,element);

    cout<<Get(dm, i, j);

    return 0;
}