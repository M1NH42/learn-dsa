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

int main()
{
    struct Queue q;

    cout<<"Enter size: \n";
    cin>>q.size;

    q.Q = (int *)malloc(q.size * sizeof(int));

    q.front = q.rear = -1;
}