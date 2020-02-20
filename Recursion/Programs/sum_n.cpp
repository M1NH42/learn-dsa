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

int i_sum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum = sum+i;
        //cout<<sum;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;

    //recursive funtion call
    cout<<sum_n(n)<<endl;

    //iterative function call
    cout<<i_sum(n)<<endl;

    return 0;
}