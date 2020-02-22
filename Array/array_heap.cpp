// In this program we allocate array in heap memory location
// how todeclare that array
// traverse and storing element in heap array
// need to delete that array in order to avoid memory leak problem

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int *p; //declared pointer variable created in stack which stores address of some variavble assigned to it
    p = (int *) malloc(n*sizeof(int)); //in c-language heap memory is allocated in this way which return pointer
    // p = new int[n]; // in cpp heap memry allocation in this way: syntax: new keyword

    cout<<"Enter elemnts:\n";
    for(int i=0;i<n;i++)
    {
        cin>>p[i]; // takes input from user starting from index 0 to n-1
    }

    cout<<"Elements are: \n";
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }

    // heap memory must be freed in order to avoid memory leak problem
    free(p); //in c-lan 
    // delete []p; //in cpp

    //cout<<p[2];

    return 0;
}