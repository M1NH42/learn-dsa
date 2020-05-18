#include<bits/stdc++.h>

#include "queue.h"

using namespace std;

// init root
struct Node *root=NULL;

// create a tree using queue
void tree_create()
{
    struct Node *p, *t;
    int x;

    // define queue
    struct Queue q;
    // create of some size
    // better use q using linked list
    create(&q, 100);

    cout<<"Enter root : "<<endl;
    cin>>x;

    // memory allocation for the root node
    root = (struct Node *)malloc(sizeof(struct Node));

    root->data=x;
    root->l_child=root->r_child=NULL;

    enqueue(&q, root);

    while(!is_empty(q))
    {
        p=dequeue(&q);

        cout<<"Enter left child of "<<p->data<<": ";
        cin>>x;

        if(x!=-1)
        {
            t=new Node;
            t->data=x;
            t->l_child=t->r_child=NULL;
            p->l_child=t;
            enqueue(&q, t);
        }
        cout<<"Enter right child of "<<p->data<<": ";
        cin>>x;

        if(x!=-1)
        {
            t=new Node;
            t->data=x;
            t->l_child=t->r_child=NULL;
            p->l_child=t;
            enqueue(&q, t);
        }
    }
}

// preorder traversal
void preorder(struct Node *p)
{
    if(p)
    {
        cout<< p->data<<" ";
        preorder(p->l_child);
        preorder(p->r_child);
    }
}

// inorder travesral of the tree
void Inorder(struct Node *p)
{
    // if p not null
    if(p)
    {
        Inorder(p->l_child);
        printf("%d ",p->data);
        Inorder(p->r_child);
    }
}

// traverse level by level
void level_order(struct Node* p)
{
    /* we will implement level order traversal with the help of queue */
    struct Queue q;

    // create a queue of max size
    create(&q, 100);

    // print root data
    cout<<p->data;

    // insert address of the node to the queue
    enqueue(&q, p);

    // check for empty condition
    while(q.front != q.rear)
    {
        // remove address of q in the p node
        p = dequeue(&q);
        
        // if lef child is present
        if(p->l_child)
        {
            cout<<p->l_child->data;
            enqueue(&q, p->l_child);
        }
        if(p->r_child)
        {
            cout<<p->r_child->data;
            enqueue(&q, p->r_child);
        }
    }
}

int main()
{
    tree_create();

    // Inorder(root);

    level_order(root);

    return 0;
}
