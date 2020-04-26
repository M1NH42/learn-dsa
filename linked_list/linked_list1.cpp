// Implementation of the linked list which comprises of the operations like
// 1. defining a Node
// 2. creating a Node
// 3. traversing 
// 4. displaying node's data

#include <bits/stdc++.h>
using namespace std;

// define Node
struct Node
{
    int data;
    struct Node * next;
}*first = NULL;

// create linked list
void create(int A[],int n)
{
    int i;

    // create node pointers
    struct Node *t,*last;

    // allocate memory in the heap section of the memory
    first=(struct Node *)malloc(sizeof(struct Node));
    
    // assign first element of array to data of first node
    first->data=A[0];
    
    // make point to NULL
    first->next=NULL;
    
    // make last and first point to the same node
    last=first;
    
    // loop thru and allocate nodes
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

// counting number of nodes in the linked list
// 1 iterative approach
int count_nodes(struct Node *p)
{
    int count = 0;

    // condition
    while(p != NULL)
    {
        count++;
        p = p->next;
    }

    // return result
    return count;
}

// 2. Recurssive approach to count number of nodes

// 1 iterative method
// displays the data of the nodes
void display(struct Node *p)
{
    // traverse through the linked list
    // as long as we reach the last node
    while (p != NULL)
    {
        printf("%d \n", p->data);
        p = p -> next;
    }
}

// 2 recurssive method
// display function
// this displays the data in excessing order
// because display_rec fxn is called after the 
// print statement
void dispay_rec(struct Node * p)
{
    // base condition for cont..
    if(p != NULL)
    {   
        // if we call the recurssive fxn first then the print
        // statement will be executed in the returning acces
        // prints the node data in reverse order
        dispay_rec(p->next);
        cout<< p->data << endl;
        // dispay_rec(p->next);
    }
}

// sum of nodes
int sum_of_nodes(struct Node *p)
{
    int sum=0;

    // traverse and add
    while(p) // equivalent to p!=NULL
    {
        sum += p->data;
        p = p->next;
    }

    // return results
    return sum;
}

int main()
{
    //struct Node *first = NULL;

    // add node
    // allocate memory in heap
    // first = (struct Node *) malloc(sizeof(struct Node));

    // store data
    //first -> data = 10;

    // next does not point to any node
    //first -> next = NULL; 


    // create space for temp
    //struct Node *temp;
    int A[]={3,5,7,10,25,8,32,2};
    create(A, 5);

    display(first); // called

    cout << "*************** break *******************\n";

    dispay_rec(first);

    /* if(first->next == NULL)
    {
        cout << "last node\n";
    } */


    // call count_nodes()
    cout << "Number of nodes: " << count_nodes(first)<<endl;

    return 0;
}