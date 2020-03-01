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

// insert element x at its correct position in a
// sorted array
void insert_in_sorted(int arr[], int x, int n)
{
    int i = n-1; // start from last element
    while(arr[i]>x) // checks if x is smaller than array elements
    {
        arr[i+1]=arr[i]; // if smaller the shift right
        i--; // move towards left side
    }
    arr[i+1]=x; // store x at correct position
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

    int element;
    cout<<"Enter element: ";
    cin>> element;
    insert_in_sorted(arr, element, n);
    cout<<"***********************************"<<endl;
    cout<<"Elements are\n";
    display(arr, n);

    cout<<"***********************************"<<endl;

    return 0;
}