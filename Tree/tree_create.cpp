#include<bits/stdc++.h>

#include "queue.h"

using namespace std;

// init root
struct Node *root=NULL;

void tree_create()
{
    struct Node *p, *t;
    int x;

    struct Queue q;
    // create of some size
    // better use q using linked list
    create(&q, 100);

    cout<<"Enter root : "<<endl;
    cin>>x;

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

void preorder(struct Node *p)
{
    if(p)
    {
        cout<< p->data<<" ";
        preorder(p->l_child);
        preorder(p->r_child);
    }
}

void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->l_child);
        printf("%d ",p->data);
        Inorder(p->r_child);
    }
}

int main()
{
    tree_create();

    Inorder(root);

    return 0;
}
