// recurssive funtion to solve tower of hanoi problem
// but takes O(2^n) time

#include<bits/stdc++.h>
using namespace std;

void TOH(int n, int a, int b, int c)
{
    if(n>0)
    {
        // a to b using c (intermediate state)
        TOH(n-1,a,c,b);
        cout<<"("<<a<<", "<<c<<")"<<endl;

        //b to c using a(intermediate state)
        TOH(n-1,b,a,c);
    }
}

int main()
{
    int n, A, B,C;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter A: ";
    cin>>A;

    cout<<"Enter B: ";
    cin>>B;

    cout<<"Enter C: ";
    cin>>C;

    //recurssive funtion called
    TOH(n,A,B,C);

    return 0;
}