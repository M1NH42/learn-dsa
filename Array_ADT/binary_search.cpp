// we'll be performing binary search on a sorted array
// first we'll perfrom iterative binary search and after that
// we'll see how recurssive binary search works
// and also difference between these two methods

#include<bits/stdc++.h>
using namespace std;

/* void display()
{

} */

int i_binary_search(int p, int l, int h, int key)
{
    int l, h, mid;
    l=0;
    h=n-1;
    while(l<=h)
    {
        mid= (l+h)/2;

        if(key==p[mid])
        {
            return mid;
        }
        else if(key<p[mid])
        {
            
        }
    }
}

int main()
{

    static int n;
    cout<<"Enter n: ";
    cin>>n;

    int *p;
    p= (int *)malloc(n* sizeof(int));

    // insert elments in the heap array
    for(int i=0; i<n;i++)
    {
        cin>>p[i];
    }


}