// program shows the working of static and globalvariable in recursion

#include<bits/stdc++.h>
using namespace std;

int fun(int n)
{
    static int x = 0;

    if(n>0)
    {
        x++; //here x becomes 5 by incrementing each time the fun is called

        return fun(n-1)+x; // x is called in returning phase
    }
    return 0;
}

int main()
{
    int i;
    cin>>i;

    cout<<fun(i); // returns 25

    return 0;
}