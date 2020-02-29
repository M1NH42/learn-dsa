// we'll be performing binary search on a sorted array
// first we'll perfrom iterative binary search and after that
// we'll see how recurssive binary search works
// and also difference between these two methods

#include<bits/stdc++.h>
using namespace std;

struct Array // needed to combine properties of an array in one
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{
    cout<<"Elements of an array\n";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<endl; // prints the elememts of an array
    }
}

// this is iterative linear search function
int i_linearsearch(struct Array arr, int key)
{
    int l=0;
    int h=arr.length;
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
        {
            return mid;
        }
        else if(key<arr.A[mid])
        {
            return h= mid-1;
        }
        else
        {
            return l= mid+1;
        }
    }
    return -1;
}

// recursive binaru search for an element at the mid
//it's a tail recurssion
// if tail recursion it's better to write function using loop
// as tail recursion internally uses stack
int r_binarysearch(struct Array arr,int l, int h,int key)
{
    /* int l=0;
    int h=arr.length; */
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
        {
            return mid;
        }
        else if(key<arr.A[mid])
        {
            return r_binarysearch(arr,l,mid-1,key);
        }
        else
        {
            return r_binarysearch(arr,mid+1,h,key);
        }
    }
    return -1;
}

int main()
{      
    struct Array arr;

    cout<<"Size of an array: ";
    cin>>arr.size;

    arr.A =(int *)malloc(arr.size*sizeof(int)); // dynamically allocated heap memory to A

    int n;
    cout<<"Enter lenth of an arraY: ";
    cin>>n;

    arr.length=0;

    cout<<"Elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr.A[i]; //takes input from user upto n-1 elements
    }

    arr.length=n; // set length equals n

    display(arr); // array display() called

    int key;
    cout<<"Enter key: ";
    cin>>key;
    int l=0;
    int h=arr.length;

    int res;
    //res=i_linearsearch(arr,key); // linearsearch() called and result is tored in res variable
    res=r_binarysearch(arr,l,h,key);
    cout<<"Element "<<key<<" present at: "<<res<<endl;
    //cout<<"Length of the array: "<<arr.length<<endl;

    return 0;
}