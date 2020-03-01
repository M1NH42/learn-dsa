// this program performs few operation on an array
/*  Operations are:
    * insert lement in a sorted array
    * check if array is sorted or not
    * bring -ve on left and +ve on right
*/

#include<bits/stdc++.h>
using namespace std;

// displays array elements from index 0 to n-1
void display(int arr[], int n)
{
    for(int i=0; i<=n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

void insert_in_sorted(int arr[],int n, int x)
{
    int i=n-1;
    while(arr[i]>x) // check if the last array element is greater than the x
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=x;
}

int is_sorted(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}

void neg_pos(int a[], int n){
    int i=0;
    int j=n-1;

    while(i<j){
        while(a[i]<0){
            i++;
        }
        while(a[j]>0){
            j--;
        }
    } 
    if(i<j){
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int a[n];
    cout<<"***********************************"<<endl;
    // take input from user and store in the array
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; //stores in array of size n-1
    }

    cout<<"***********************************"<<endl;
    int val;
    cout<<"Enter val: ";
    cin>>val;

    insert_in_sorted(a,n,val);

    //cout<<"***********************************"<<endl;
    //is_sorted(a,n);

    neg_pos(a,n); // called

    cout<<"***********************************"<<endl;
    display(a,n);

    return 0;
}