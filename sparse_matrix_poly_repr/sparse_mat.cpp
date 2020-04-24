// Intro : In thi program we will see the implementation of the sparse matrix
// which is nothing but a matrix with lots of zeroes
// canbe represented by following two methods
// * 3 column representation
// * compressed sparse matrix

// Here we will create and display the sparse matrix using struct as shown

// add libraries
#include<bits/stdc++.h>

using namespace std;

struct Element
{
    int row;
    int col;
    int val;
};

struct Sparse
{
    int m;
    int n;
    int non;
    struct Element *element; // to dynamically create array of the non zero numbers
};

// function to create sparse matrix
void create (struct Sparse *s)
{
    cout << "Enter dimensions of the sparse matrix : ";
    scanf("%d %d", &s->m, &s->n);

    cout << "Enter number of non-zeroes element : ";
    scanf("%d", &s->non);

    // create dynamic array to store the elements
    s->element = new Element[s->non];

    // enter numbers
    cout <<"Enter all the non-zeroes elements: \n";

    for (int i=0; i<s->non; i++)
    {
        scanf("%d %d %d", &s->element[i].row, &s->element[i].col, &s->element[i].val); // accepts row, col and vals
    }
}

void display (struct Sparse s)
{
    int k=0;

    for(int i=0; i< s.m; i++)
    {
        for (int j=0; j<s.n; j++)
        {
            if (i==s.element[k].row && j==s.element[k].col)
            {
                printf("%d ", s.element[k++].val);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    struct Sparse s;

    create(&s);

    display(s);


    return 0;
}