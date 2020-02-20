// program to show the working of tree recursion
// tree recursion means a program calls itself more than one time recursively

#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    printf("%d ",n);

    fun(n-1);
    fun(n-1);
}

int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;

    fun(x);

    return 0;
}