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
    if(index>=0 && index<arr.length) // checks if index is valid or not
    {
        return arr.A[index];
    }
}

// set function
int set(Array arr, int index, int val)
{
    if(index>=0 && index<arr.length) // checks if index is valid or not
    {
        arr.A[index]=val;
    }
    return arr.A[index];
}

// max function
int max(Array arr)
{
    int max=arr.A[0]; // lets take first element of an array is max

    for(int i=0; i<arr.length; i++)
    {
        if(arr.A[i]>max) //checks if max > elements in array
        {
            max=arr.A[i]; // update the max
        }
    }
    return max;
}

// min function
int min(struct Array arr)
{
    int min =arr.A[0]; // set first element as min

    for(int i=0; i<arr.length; i++) // traversing and checking
    {
        if(arr.A[i]<min) // checks if min< elements in array
        {
            min=arr.A[i];
        }
    }
    return min;
}

// sum function
int sum(Array arr)
{
    int sum =0; // initialize sum as zero
    for(int i=0; i<arr.length; i++)
    {
        sum += arr.A[i]; // keep adding every element and store in sum variable
    }
    return sum; //returns sum
}

// average function
int avgerage(struct Array arr)
{
    int sum=0;
    for(int i=0;i<arr.length;i++)
    {
        sum += arr.A[i];
    }
    return sum/arr.length;
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