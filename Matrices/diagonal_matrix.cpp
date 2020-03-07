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

int main()
{
    struct Matrix m;

    return 0;
}