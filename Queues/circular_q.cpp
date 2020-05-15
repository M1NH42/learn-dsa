#include<bits/stdc++.h>
using namespace std;

// #define rep(i,a,b) for(int i=a;i<=b;i++)

// define Queue
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

// create a queue
void create(struct Queue *q, int size)
{
    q->size=size;

    q->front=q->rear=0;

    q->Q = (int *)malloc(q->size * sizeof(int));
}

// enqueue in circular queue
void enqueue(struct Queue *q, int x)
{
    // check full condition
    if((q->rear+1)%q->size == q->front)
    {
        cout<<"q full hai\n";
    }
    else
    {
        q->rear = (q->rear+1) % q->size;
        q->Q[q->rear] = x;
    }   
}

int dequeue(struct Queue *q)
{
    int x =-1;

    // check mepty condition
    if(q->rear==q->front)
    {
        cout<<"empty hai\n";
    }
    else
    {
        q->front = (q->front+1) % q->size;
        x = q->Q[q->front];
    }
    return x;    
}

// display elements of the queue
void display(struct Queue q)
{
    // init i with front of the q
    int i=q.front+1;

    do
    {
        /* code */
        cout<<q.Q[i]<<" ";
        i=(i+1)%q.size;

    } while (i != (q.rear+1)%q.size);
    cout<<endl;
}

int main()
{
    struct Queue q;

    create(&q, 5); // in a size of 5 we can only insert 4 elements

    enqueue(&q, 10); // called enq
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    // enqueue(&q, 50);
    // enqueue(&q, 60);

    // call disp
    display(q);

    return 0;
}
