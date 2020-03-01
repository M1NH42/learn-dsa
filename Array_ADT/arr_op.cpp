// this program performs few operation on an array
/*  Operations are:
    * insert lement in a sorted array
    * check if array is sorted or not
    * bring -ve on left and +ve on right
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int a[n];
    // take input from user and store in the array
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; //stores in array of size n-1
    }

    return 0;
}