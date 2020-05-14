/* Add description: Queue in this program is implemented using array
   Queue follows FIFO (frist in first out) */

#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

// insertion tkes place from the rear of the queue
void enqueue(struct Queue *q, int x)
{
    // check for full
    if(q->rear == q->size-1)
    {
        cout<<"Queue is full\n";
    }
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }    
}

// deletion operation takes place from the front side
int dequeue(struct Queue *q)
{
    int x = -1;
    // check for empty
    if(q->front==q->rear)
    {
        cout<<"Empty queue\n";
    }
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
}

void display(struct Queue q)
{
    if(q.front==q.rear)
    {
        cout<<"Empty queue\n";
    }
    else
    {
        for(int i=q.front; i<q.rear; i++)
        {
            cout<<q.Q[i]<<endl;
        }
    }
    
}

int main()
{
    struct Queue q;

    cout<<"Enter size: \n";
    cin>>q.size;

    q.Q = (int *)malloc(q.size * sizeof(int));

    q.front = q.rear = -1;


    // called enq
    enqueue(&q, 34);
    enqueue(&q, 324);
    enqueue(&q, 134);
    enqueue(&q, 4);
    enqueue(&q, 3);


    // call display()
    display(q);

    return 0;
}