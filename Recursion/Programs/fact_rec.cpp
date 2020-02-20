// factorial cal using recursion

#include<bits/stdc++.h>
using namespace std;


int factorial(int n)
{
    if(n<0)
    {
        //cout <<"Enter a poositive number\n";
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    else
    {
        return factorial(n-1)*n;
    }
}
int main()
{
    int num;
    cout<<"Enter a number\n";
    cin>>num;

    cout<<"Factorial of a given number is : " << factorial(num)<<endl;          
    return 0;
}