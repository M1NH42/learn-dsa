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


// this function will merge two sorted arrays together
int merge_arrays(int a[], int n, int b[], int m, int c[])
{
    int i, j, k;
    i=j=k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j]) // if element of a is smaller the element of b
        {
            c[k]=a[i]; // store in c
            i++; // incremenet index in a[]
            k++; // increment index in c[]
        }
        else
        {
            c[k]=b[j]; // else store b[] lemeent in c[]
            j++; // increment index of b[]
            k++; // increment index of c[]
        }
    }
    // there might be case where element in any of the array might left
    // so for that we'll start with present value of i and j and store in c[]
    // by incrementing it's array index by one
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
    return c[p]; // return c[] as result
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