#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*front=NULL, *rear=NULL;

void enq(int x)
{
    // check full condition
    Node *t = new Node;
    if(t==NULL)
    {
        cout<<"Full hai\n";
    }
    else
    {
        t->data=x;
        t->next=NULL;
        
        if(front==NULL)
        {
            front=rear=t;
        }
        else
        {
            rear->next=t;
            rear=t;
        }
        
    }
    
}

int main()
{
    struct Node *q;
    // q = (struct Node*) malloc(sizeof(struct Node));

    return 0;
}