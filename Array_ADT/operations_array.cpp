/*  in this program we'll perform different array operations such as
    * get()
    * set(index, x)
    * max()
    * min()
    * sum()
    * average()
 */

#include<bits/stdc++.h>
using namespace std;

struct Array
{
    int *A;
    int length;
    int size;
};

//displays lements of an array
void display(struct Array arr)
{
    for(int i=0; i<arr.length; i++)
    {
        cout<<arr.A[i]<<endl;
    }
}

// get function
int get(Array arr, int index)
{
    if(index>=0 && index<arr.length)
    {
        return arr.A[index];
    }
}

int main()
{
    struct Array arr;

    cout<<"Enter size: ";
    cin>>arr.size;

    //allocate memory in heap equals to size of given
    arr.A=(int *)malloc(arr.size*sizeof(int));

    //set lenght
    arr.length=0;

    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"***********************************"<<endl;

    cout<<"Enter array elements\n";
    //take input array elements
    for(int i=0; i<n; i++)
    {
        cin>>arr.A[i];
    }
    arr.length=n;

    cout<<"***********************************"<<endl;
    cout<<"Elements are: \n";
    display(arr);

    cout<<"***********************************"<<endl;

    int index;
    cout<<"Enter index: ";
    cin>>index;

    cout<<"***********************************"<<endl;

    cout<<"Element at "<<index<<" : "<<get(arr, index)<<endl;

    cout<<"***********************************"<<endl;

    return 0;
}