#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<=b;i++)

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

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

void display(struct Queue q)
{
    int i=q.front+1;

    do
    {
        /* code */
        cout<<q.Q[i];
        i=(i+1)%q.size;
        
    } while (i != (q.rear+1)%q.size);
    cout<<endl;
}

int main()
{
    struct Queue q;

    create(&q, 5);



    return 0;
}