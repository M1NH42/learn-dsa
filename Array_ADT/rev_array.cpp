// this program reverse the given array
// time complexity = O(n)

#include<bits/stdc++.h>
using namespace std;

// display fuction displays the elements of an array
void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl; // displays n-1 elememnts
    }
}

// this function will reverse the elements of ana array
void rev_array(int arr[], int n)
{
    int temp;
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

int main()
{
    int n; // size or lentgh
    cout<<"Enter n: ";
    cin>>n;

    int arr[n];

    cout<<"***********************************"<<endl;
    cout<<"Enter elemnts\n";
    for(int i=0; i<n;i++) // runs for n-1 times
    {
        cin>>arr[i]; // puts elements in an array
    }

    cout<<"***********************************"<<endl;
    cout<<"Elements are:\n";
    display(arr, n);

    cout<<"***********************************"<<endl;

    cout<<"Reverse array elements are:\n";

    rev_array(arr, n); // reverse function called
    display(arr,n);

    cout<<"***********************************"<<endl;
}