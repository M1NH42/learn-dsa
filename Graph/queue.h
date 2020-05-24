//
// Created by Minhaz Alam on 24/05/20.
//

#ifndef LEARN_DSA_QUEUE_H
#define LEARN_DSA_QUEUE_H
//#include <stdlib>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*front=NULL, *rear=NULL;

void enqueue(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if(t==NULL)
    {
        cout<<"queue is full\n";
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if(front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = -1;
    struct Node* t;

    if(front==NULL)
    {
        cout<<"queue is empty\n";
    }
    else
    {
        x = front -> data;
        t = front;
        front = front -> next;
        free(t);
    }
    return x;
}

int is_empty()
{
    return front == NULL;
}

#endif //LEARN_DSA_QUEUE_H
