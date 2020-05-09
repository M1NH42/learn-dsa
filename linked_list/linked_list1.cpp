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
    // init first as max
    int max = p->data;

    // till p becomes NULL
    while(p)
    {
        // if next data is greater than the max value
        if (p->data > max)
        {
            // simply update the max vaue with the greater value
            max = p->data;
        }
        // move p to next of p
        p = p->next;
    }
    // return max value
    return max;
}
// to find minimum element in the linked list we must follow the same 
// method but changing variables

// search element in linked list
// 1. Iterative

// returns addres of that node where the key is present
Node * search_node(struct Node *p, int key)
{
    // while(p != NULL)
    while (p)
    {
        // if key is the first data of p
        if(key == p->data)
        {
            // return p
            return p;
        }
        // move p to next
        p = p->next;
    }
    // elese return NULL
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

    // index validation
    if (index<0 || index > count_nodes(p))
    {
        return;
    }

    // create new node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    // store data to new_node's data section
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
        // move p to the node just before the position
        for (int i=0; i<index-1; i++)
        {
            // move p to next
            p =p->next;
        }
        // make new node point to p
        new_node->next = p->next;

        p->next = new_node;
    }
}

// insert_at_last()
/* void insert_at_last(int data)
{
    struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = data;

    if(first == NULL)
    {
        first = last = 
    }
} */

// insert in the sorted linked list
void insert_in_sorted(struct Node * p, int data)
{
    // init two pointer
    Node *t, *q = NULL;

    // create node to be inserted
    t = new Node;

    // store data in new node's data
    t->data = data;

    // new_node's next to null
    t->next = NULL;

    // if linked list is empty
    if (first == NULL)
    {
        // make new node as first
        first = t;
    }
    else
    {
        // check if p is not null
        while (p && p->data < data)
        {
            // q points to p
            q=p;

            // move p forward
            p=p->next;
        }
        if(p == first)
        {
            // if p is the head node
            // new_node points to head_node
            t->next = first;

            // make new_node as first
            first = t;
        }
        else
        {
            // new_node's next points to present node's next
            t->next=p->next;

            // q points to new_node which is added
            q->next=t;
        }
    }
}

// Function to delete a node at a given position
int delete_at_pos(int pos)
{
    // take two pointers
    struct Node * p, *q;

    // init the value to be deleted
    int del_val = -1;

    // check if the position is first or not
    if (pos == 1)
    {
        // if true
        // ppoints to first node
        p = first;

        // move first pointer point to next
        first = first->next;

        // store delete value in del_val
        del_val = first->data;

        // delete p because it's been allocated in
        // the heap memory
        delete p;
    }
    else
    {
        p=first;
        q=NULL;

        // p points to the node whose data to be deleted
        // q points to the previous node which helps to
        // delete node p
        for(int i=0; i<pos-1 && p; i++)
        {
            q=p;
            p=p->next;
        }
        if(p) // if p is not null
        {
            q->next=p->next;
            del_val=p->data;
            delete p;
        }
    }
    return del_val;
}

// if linked list is sorted or not
int is_sorted(struct Node* p)
{
    // smallest number possible
    // change according to your convinience
    int x = -1;

    while (p)
    {
        /* code */
        if(p->data < x)
        {
            return 0;
        }
        x = p->data;
        p=p->next;
    }
    return 1;    
}

/* This function removes the duplicate value from a sorted linked list
   by using two extra pointer to trace the duplicate element in the linked list
 */

void remove_duplicate()
{
    // point p to first node
    struct Node *p = first;

    // point q to point next of the first node
    struct Node *q = first -> next;

    // do not stop until
    while (q != NULL)
    {
        // check if prev data is equals to next data
        if (p->data != q->data)
        {
            // if not : slide bothe the pointer
            p=q;
            q=q->next;
        }
        else
        {
            // if yes
            // delete node q
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}


// reversing a linked list

void reverse_linked_list_a(){
    Node *p = first;

    int *A;
    A = (int *)malloc(sizeof(int)*count_nodes(p));

    int i =0;

    while(p){
        A[i] = p->data;
        p=p->next;
        i++;
    }
    p=first;
    i--;
    while(p){
        p->data=A[i];
        p=p->next;
        i--;
    }
}

void reverse_lisnked_list_b(){
    // we will use the concept of sliding pointers using three different
    // pointers tail to each other
    struct Node *p, *q, *r;

    p=first;
    q=NULL;
    r=NULL;

    while(p){
        r=q;
        q=p;
        p=p->next;

        q->next=r;
    }
    first=q;
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
    int A[]={3,5,7,10, 10, 56, 56, 99};

    int size_array = sizeof(A) / sizeof(A[0]);

    create(A, size_array);

    // display(first); // called

    cout << "*************** break *******************\n";

    // dispay_rec(first);

    /* if(first->next == NULL)
    {
        cout << "last node\n";
    } */

    // call insert at begining function
    // insert_at_beg(first, 121);

    // insert at any position
    // insert_at_pos(first, 4, 221);

    // display(first);

    // insert_in_sorted(first, 45);

    // called delete_at_pos() with pos
    // delete_at_pos(4);

    // cout<<"##################################"<<endl;
    display(first);

    // call count_nodes()
    cout << "Number of nodes: " << count_nodes(first)<<endl;

    // call sum_of_nodes()
    cout << "Sum of nodes: "<< sum_of_nodes(first)<<endl;

    // return max element in a linked list
    cout << "Max element : " << max_node(first)<< endl;

    // searching in a linked list
    // cout << "Element present at: " << search_node(first, 2)<<endl;


    cout<<"Linked list sorted: "<<is_sorted(first)<<endl;

    // remove_duplicate();
    // display(first);

    reverse_lisnked_list_b();
    display(first);

    return 0;
}