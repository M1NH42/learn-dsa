// This program implements the lower triangular matrix using row major
// which means elements will be stored  row wise as shown:

#include<bits/stdc++.h>
using namespace std;


// basic array structure with n size
struct Matrix
{
    int *A;
    int n;
};

// This function sets the element at lower triangular
// matrix iff i >= j

void Set(struct Matrix *m, int i, int j, int x)
{
    if(i>=j)
    {
        m->A[(i*(i-1))/2 + (j-1)] = x;
    }
}

// this function helps retrieve the element at lower
// triangular index given by the formula below: 

int Get(struct Matrix m, int i, int j)
{
    if(i>=j)
    {
        return m.A[i*(i-1)/2 + (j-1)];
    }
    else
    {
        return 0;
    }    
}

// Displays the entire structure as a matrix of
// size n*n

void display(Matrix m)
{
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            if(i>=j)
            {
                cout<<m.A[i*(i-1)/2 + (j-1)]<<" ";
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
    Matrix m;
    /* m.A = (int *)malloc((m.n*m.n+1)/2* sizeof(int)); */

    cout<<"Enter dimension: ";
    cin>>m.n;

    int x;

    m.A = (int *)malloc((m.n*m.n+1)/2* sizeof(int));

    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            cin>>x;
            Set(&m, i, j, x); // called
        }
    }

    cout<<"\n*********\n";
    display(m); // called

    return 0;
}