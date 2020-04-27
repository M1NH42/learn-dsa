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


// to find max value in a linked list
int max_node(struct Node *p)
{
    int max = p->data;

    while(p)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}
// to find minimum element in the linked list we must follow the same 
// method but changing variables

// search element in linked list
// 1. Iterative

// returns addres of that node where the key is present
Node * search_node(struct Node *p, int key)
{
    while (p)
    {
        if(key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

// function to insert at the begining of the linked list
/* void insert_at_beg(struct Node *p, int data)
{
    // create new_node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    // insert data into the new_node
    new_node->data = data;

    // make newnode point to first
    new_node->next = first;

    // make the newnode as first node
    first = new_node;
} */

// combine function to insert at any given position including
// before the first node
void insert_at_pos(struct Node *p, int index, int data)
{
    //struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    if (index<0 || index > count_nodes(p))
    {
        return;
    }

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = data;

    if (index == 0)
    {
        // points to frist node
        new_node->next = first;

        // make it first node
        first = new_node;
    }
    else
    {
        for (int i=0; i<index-1; i++)
        {
            p =p->next;
        }
        new_node->next = p->next;

        p->next = new_node;
    }
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
    int A[]={3,5,7,10,25,8,32,2, 56, 99};

    int size_array = sizeof(A) / sizeof(A[0]);

    create(A, size_array);

    display(first); // called

    cout << "*************** break *******************\n";

    // dispay_rec(first);

    /* if(first->next == NULL)
    {
        cout << "last node\n";
    } */

    // call insert at begining function
    // insert_at_beg(first, 121);

    // insert at any position
    insert_at_pos(first, 4, 221);

    display(first);


    // call count_nodes()
    cout << "Number of nodes: " << count_nodes(first)<<endl;

    // call sum_of_nodes()
    cout << "Sum of nodes: "<< sum_of_nodes(first)<<endl;

    // return max element in a linked list
    cout << "Max element : " << max_node(first)<< endl;

    // searching in a linked list
    cout << "Element present at: " << search_node(first, 2)<<endl;

    return 0;
}