/*  * In this program we'll be working with diagonal matrix in which only the
    * diagonal elements are non-zero and rest are all zero
    * we'll be perfroming some supporting functions such as get and set
*/

#include<bits/stdc++.h>
using namespace std;

struct Matrix
{
    int A[10];
    int n;
};

void Set(Matrix *m, int i, int j, int x)
{
    if(i==j)
    {
        m->A[i-1]=x; // stores value iff i==j
    }
}

int Get(Matrix m, int i, int j)
{
    if(i==j)
    {
        return m.A[i-1];
    }
    else
    {
        return 0;
    }    
}

void display(Matrix m)
{
    for(int i=0; i<m.n; i++)
    {
        for(int j=0; j<m.n; j++)
        {
            if(i==j)
            {
                cout<<m.A[i]<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    struct Matrix m;

    cout<<"Enter dimension: ";
    cin>>m.n;

    Set(&m,1,1,32);
    Set(&m,2,2,23);
    Set(&m,3,3,21);
    Set(&m,4,4,12);

    cout<<Get(m, 2, 2)<<endl;

    display(m);

    return 0;
}