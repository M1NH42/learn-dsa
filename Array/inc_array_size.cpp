// here we'll increase the size of array
// we cannot directly increase the size of an array
// so we'll copy the elements of previousarray to new array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p = (int *)malloc(5*sizeof(int));

    cout<<"Enter elements: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>p[i]; //takes elemts from user
    }

    cout<<"Elements are:\n";
    for(int i=0;i<10;i++)
    {
        cout<<p[i]<<endl; //prints the elements of array p
    }

    return 0;
}