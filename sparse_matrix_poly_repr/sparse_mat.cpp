// Intro : In thi program we will see the implementation of the sparse matrix
// which is nothing but a matrix with lots of zeroes
// canbe represented by following two methods
// * 3 column representation
// * compressed sparse matrix

// Here we will create and display the sparse matrix using struct as shown

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