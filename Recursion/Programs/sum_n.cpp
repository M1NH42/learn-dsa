#include<bits/stdc++.h>
using namespace std;
// takes O(n) time complexity
int sum_n(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return sum_n(n-1)+n;
    }
}
int main()
{
    int n;
    cin>>n;

    cout<<sum_n(n);

    return 0;
}