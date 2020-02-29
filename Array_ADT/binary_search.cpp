// we'll be performing binary search on a sorted array
// first we'll perfrom iterative binary search and after that
// we'll see how recurssive binary search works
// and also difference between these two methods

#include<bits/stdc++.h>
using namespace std;

struct Array // needed to combine properties of an array in one
{
    int *A;
    int size;
    int length;
};