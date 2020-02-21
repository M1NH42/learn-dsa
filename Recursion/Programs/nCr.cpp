// this program finds out the nCr
// if given with n and r as shown:

#include<bits/stdc++.h>
using namespace std;

/* int nCr(int n, int r)
{
    if(n==r||r==0)
    {
        return 1;
    }
    return nCr(n-1, r-1)+nCr(n-1,r);
} */

int NCR(int n,int r)
{
if(n==r || r==0)
return 1;
return NCR(n-1,r-1)+NCR(n-1,r);
}

int main()
{
    int n, r;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter r: ";
    cin>>r;

    //cout<<nCr(n,r)<<endl;

    cout<<NCR(n,r)<<endl;

    return 0;
}