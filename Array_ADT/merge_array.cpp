// this program merges two array on a condition that the two
// arrays are sorted

#include<bits/stdc++.h>
using namespace std;

// displays the array elements
void display(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl; // prints array elements
    }
}

int merge_arrays(int a[], int n, int b[], int m, int c[])
{
    int i, j, k;
    i=j=k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    for(; i<n; i++)
    {
        c[k]=a[i];
        k++;
    }
    for(; j<m; j++)
    {
        c[k]=b[j];
        k++;
    }
    int p=n+m;
    return c[p];
}

int main()
{
    int n,m;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter m: ";
    cin>>m;

    int A[n], B[m];

    cout<<"*********************************************\n";
    // take input in array A[n]
    cout<<"Enter elements in sorted order\n";
    for(int i=0; i<n; i++)
    {
        cin>>A[i]; // stores value in array index starting from 0 to n
    }

    cout<<"*********************************************\n";
    // take input in array B[m]
    cout<<"Enter elements in sorted order\n";
    for(int i=0; i<m; i++)
    {
        cin>>B[i]; // stores elements in B[] index starting from 0 t0 m-1
    }
    int C[m+n];
    int p=n+m;
    int c=merge_arrays(A,n,B,m,C);
    cout<<"*********************************************\n";
    cout<<"Mereged array : \n";
    display(C,p);

    return 0;
}