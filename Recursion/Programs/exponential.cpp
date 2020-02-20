// program to find the exponent funtion of the given number
// pow(2,n)=2*2*.........*n times
// pow(n)= a) if n=0: 1
            //if n>0: pow(2, n-1)*m

#include<bits/stdc++.h>
using namespace std;
// below function is slow
//as it makes n times multiplication
int exp(int base, int power)
{
    if(power==0)
    {
        return 1;
    }
    return exp(base, power-1) *base;
}

//now we'll write another function that is faster than the above one
// eg: 2^9 = 2 * (2^2)^4 
//eg_2: 2^8 =(2^2)^4

int main()
{
    int base;
    cout<<"Enter number\n";
    cin>>base;

    int pow;
    cout<<"enter power\n";
    cin>>pow;

    int result=exp(base,pow);
    cout<<"exp\n";
    cout<<result<<endl;

    return 0;
}