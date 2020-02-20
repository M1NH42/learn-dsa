#include<bits/stdc++.h>
using namespace std;
// takes O(n) time complexity
//recursive funtion to find sum of n natural numbers
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

//iterative function to find sum of n natural numbers

int main()
{
    int n;
    cin>>n;

    cout<<sum_n(n);

    return 0;
}