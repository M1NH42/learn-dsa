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
        // nest line 
        printf("\n");
    }
}

// function to add two sparse matices
struct Sparse * add(struct Sparse *s1, struct Sparse *s2)
{
    struct Sparse *sum;
    int i, j, k;
    i=j=k=0;

    if (s1->m != s2->m && s1->n != s2->n)
    {
        return NULL;
    }
    sum = (struct Sparse *) malloc (sizeof(struct Sparse));

    sum->element = (struct Element *)malloc((s1->n + s2->n) *sizeof(struct Element));

    // check if i less than number of non zero lemeents
    while (i < s1->non && j< s2->non)
    {
        if(s1->element[i].row<s2->element[j].row)
        {
            sum->element[k++] = s1->element[i++];
        }
        else if (s1->element[i].row>s2->element[j].row)
        {
            sum->element[k++] = s2->element[j++];
        }
    }
}

int main()
{
    struct Sparse s;

    // called create fxn
    // call by reference
    create(&s);

    // calle display
    // call by value
    display(s);


    return 0;
}