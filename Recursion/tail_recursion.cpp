// program shows the working of tail recursion

#include<bits/stdc++.h>
using namespace std;

void fun(int x)
{
    if (x >0)
    {
        cout << x <<endl;

        fun(x - 1); //tail fun
    }
}

int main()
{
    int a = 4;

    fun(a);

    return 0;
}