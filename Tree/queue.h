#ifndef Queue_h
#define Queue_h
/* #include<bits/stdc++.h>
using namespace std; */

struct Node
{
    struct Node *l_child;
    int data;
    struct Node *r_child;
};

struct Queue
{
    int size;
    int front;
    int rear;
    struct Node* *Q;
};

// create a queue
void create(struct Queue *q, int size)
{
    q->size=size;

    q->front=q->rear=0;

    q->Q = (struct Node **)malloc(q->size * sizeof(struct Node *));
}

// enqueue in circular queue
void enqueue(struct Queue *q, struct Node *x)
{
    // check full condition
    if((q->rear+1)%q->size == q->front)
    {
        std::cout<<"q full hai\n";
    }
    else
    {
        q->rear = (q->rear+1) % q->size;
        q->Q[q->rear] = x;
    }   
}

struct Node * dequeue(struct Queue *q)
{
    struct Node *x =NULL;

    // check mepty condition
    if(q->rear==q->front)
    {
        std::cout<<"empty hai\n";
    }
    else
    {
        q->front = (q->front+1) % q->size;
        x = q->Q[q->front];
    }
    return x;    
}

int is_empty(struct Queue q)
{
    return q.front==q.rear;
}

#endif