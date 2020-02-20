//this is iterative program to calculate the fibonacci function
// o(n)

#include<bits/stdc++.h>
using namespace std;

//iterative function to find fibonacci of a given number
int fib(int n)
{
    int t0 = 0, t1 =1,s=0;
    cout<<t0<<" "<<t1<<" ";
    if(n<=1)
    {
        return n;
    }
    /* int t0 = 0, t1 =1,s=0; */
    for(int i=2;i<=n;i++)
    {
        /* cout<<t0<<" "<<t1<<" "; */
        s=t0+t1;
        t0=t1;
        t1=s;
        cout<<s<<" ";
    }
    return s;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<fib(n);

    return 0;
}