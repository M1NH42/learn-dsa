// in this program we'll code and learn about array ADT
// how they declared and various operations performed
// on the

#include<bits/stdc++.h>
using namespace std;

struct Array // needed to combine properties of an array in one
{
    int *A;
    int size;
    int length;
};

void append(struct Array *arr, int x) // this fuction will first chech if lenght<size only then
{                                     // insert element x at the ed of the array
    if(arr->length < arr->size)
    {
        arr->A[arr->length]=x;
        arr->length++;
    }
}

// this function will insert an element 'x' at a given index in that array
// by shifting the elements if presesnt at that index
void insert_at(struct Array *arr, int index, int x)
{
    if(index>=0 && index <= arr->length)
    {
        for(int i=arr->length; i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

void display(struct Array arr)
{
    cout<<"Elements of an array\n";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<endl; // prints the elememts of an array
    }
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

    cout<<"Enter x: ";
    int x;
    cin>>x;

    //append(&arr,x);

    cout<<"Enter index: ";
    int index;
    cin>>index;
    insert_at(&arr,index,x);

    display(arr);

    cout<<"Length of the array: "<<arr.length<<endl;

    return 0;
}