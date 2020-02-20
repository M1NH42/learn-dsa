// programs shows the working of indirect recursion

#include<bits/stdc++.h>
using namespace std;

void fun_2(int n); // must be declared before fun_1 so that it can be accessed

void fun_1(int n)
{
    if(n>0)
    {
        cout<<n << " ";
        fun_2(n-1);
    }
}

void fun_2(int n)
{
    if(n>1)
    {
        cout<<n<<" ";
        fun_1(n/2);
    }
    //cout<<"\n";
}

int main()
{
    int a;
    cin>>a;
    fun_1(a);

    return 0;
}