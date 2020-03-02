// this program merges two array on a condition that the two
// arrays are sorted

#include<bits/stdc++.h>
using namespace std;

void display(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl; // prints array elements
    }
}

int main()
{
    int n,m;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter m: ";
    cin>>m;

    int A[n], B[m];

    // take input in array A[n]
    for(int i=0; i<n; i++)
    {
        cin>>A[i]; // stores value in array index starting from 0 to n
    }

    // take input in array B[m]
    for(int i=0; i<m; i++)
    {
        cin>>B[i]; // stores elements in B[] index starting from 0 t0 m-1
    }

    return 0;
}