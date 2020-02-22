// array basic programs such as
// declaration and initialization
//as shown below

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100]; //creates an array of size 100

    cout<<"Enter n : ";
    int n;
    cin>>n;

    cout<<"Enter array elements\n";
    for(int i=0; i<n;i++)
    {
        cin>>arr[i]; // takes input from the user starting from 0 to index n-1
    }

    cout<<"Array elements\n";
    for(int i=0;i<n;i++) // traversal through na array
    {
        cout<<arr[i]<<endl; // prints value of array from index 0 to n-1
    }

    return 0;
}