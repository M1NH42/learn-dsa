// we'll be performinglinear search in an array to return the index of the given element

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

    /* cout<<"Enter x: ";
    int x;
    cin>>x;
 */
    //append(&arr,x);

    cout<<"Enter index: ";
    int index;
    cin>>index;
    //insert_at(&arr,index,x);

    delete_arr(&arr, index);

    display(arr);

    cout<<"Length of the array: "<<arr.length<<endl;

    return 0;
}