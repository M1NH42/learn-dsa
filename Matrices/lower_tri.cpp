// This program implements the lower triangular matrix uisng row major
// which means lements will be stored  row wise as shown: 

#include<bits/stdc++.h>
using namespace std;

struct Matrix
{
    int *A;
    int n;
};

void Set(struct Matrix *m, int i, int j, int x)
{
    if(i>=j)
    {
        m->A[(i*(i-1))/2 + (j-1)] = x;
    }
}

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
            Set(&m, i, j, x);
        }
    }

    cout<<"\n*********\n";
    display(m);

    return 0;
}