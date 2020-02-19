// program to show the working of head recursion
// this will execute the cout in returning phase

#include<bits/stdc++.h>
using namespace std;

void fun(int a)
{
    if(a>0)
    {
        fun(a-1); //head rec fun
        cout<<a<<endl;
    }
}

int main ()
{
    int n;
    cin >>n;

    fun(n);

    return 0;
}