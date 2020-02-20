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

//recurssive function to find fibonacci series
//the problem with this is : it call the same 
//function again and again for the same value
//time complexity for this is O(2^n) which is
//not good
int fib_rec(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib_rec(n-2)+fib_rec(n-1);
}

//the better approach is to store the value which
//is being called once so we dont have to call the
//function again and again for the same value

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<fib(n)<<endl;

    //recurssive fib called
    cout<<fib_rec(n);

    return 0;
}