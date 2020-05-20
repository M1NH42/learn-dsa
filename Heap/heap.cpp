/* This is the implementation of the heap  */

#include<bits/stdc++.h>
using namespace std;

void insert_element(int H[], int n)
{
    int temp, i=n;
    temp=H[n];

    while(i>1 && temp>H[i/2])
    {
        H[i]=H[i/2];
        i=i/2;
    }
    H[i]=temp;
}

void create_heap(int H[], int n)
{
    for(int i=2;i<=7;i++)
    {
        insert_element(H,i);
    }
}

int delete_element(int H[], int n)
{
    int x,temp;

    int val=H[1];
    H[n]=val;
    x=H[n];
    H[1]=H[n];
    int i=1, j=2*i;//points to left child

    while(j<n-1)
    {
        if(H[j+1]>H[j])
        {
            j=j+1;
        }
        if(H[i]<H[j])
        {
            temp=H[i];
            H[i]=H[j];
            H[j]=temp;
            i=j;
            j=2*j;
        }
        else
        {
            break;
        }
        
    }
    return val;
}

int main()
{
    int H[]={0,10,20,30,25,5,40,35};

    create_heap(H,7);

    // delete elements one-by-one
    for(int i=7;i>0;i--)
    {
        cout<<"Deleted val : "<<delete_element(H,i)<<"\n";
    }

    for(int i=1;i<=7;i++)
    {
        cout<<H[i]<<" ";
    }
    cout<<endl;

    return 0;
}