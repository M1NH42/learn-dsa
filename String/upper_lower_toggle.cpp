// This program toggles between upper case and lower case
// by adding difference of upper case to lower case
// A=65 & a=97 , diff=32
// A+32=65+32 = 97 = a // for upper to lower
// a-32=97-32=65= A // for lower to upper

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    char a[n];

    // take input
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; // stores input
    }

    // show output
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    cout<<endl;

    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>= 'A' && a[i]<= 'Z')
        {
            a[i] += 32;
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            a[i] -= 32;
        }
    }
    printf("%s",a);

    return 0;
}
