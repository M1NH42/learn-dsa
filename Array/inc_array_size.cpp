// here we'll increase the size of array
// we cannot directly increase the size of an array
// so we'll copy the elements of previousarray to new array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p = (int *)malloc(5*sizeof(int));

    cout<<"Enter elements: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>p[i]; //takes elemts from user
    }

    int *q = new int[10]; // new pointer array in heap named q
    for(int i=0;i<5;i++)
    {
        q[i]=p[i]; // copy elements of p in q
    }
    free(p); // delete p : free heap
    p=q; // p pointing to q array created in the heap
    q=NULL; // make q zero so p can access it
    //free(p);

    cout<<"Elements are:\n";
    for(int i=0;i<5;i++) //traversal thrpough an array
    {
        cout<<p[i]<<endl; //prints the elements of array p
    }

    return 0;
}