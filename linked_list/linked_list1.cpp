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
};

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p -> next;
    }
}

int main()
{
    struct Node *first = NULL;

    // add node
    // allocate memory in heap
    first = (struct Node *) malloc(sizeof(struct Node));

    // store data
    first -> data = 10;
    first -> next = NULL;

    display(first); // called

    if(first->next == NULL)
    {
        cout << "last node\n";
    }

    return 0;

}