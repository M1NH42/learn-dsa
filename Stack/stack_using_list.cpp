#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x){
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));

    if(t==NULL)
    {
        cout<<"stack overflow\n";
    }
    else
    {
        t->data=x;
        t->next = top;
        top=t;
    }    
}

int pop()
{
    int x=-1;

    if(top==NULL)
    {
        cout<<"Underflow\n";
    }
    else
    {
        struct Node *p = top;

        top=top->next;

        x=p->data;

        free(p);
    }
    return x;
    
}

void display()
{
    struct Node *p;
    p=top;

    while(p)
    {
        cout<<p->data<<"\n";
        p=p->next;
    }
    cout<<"\n";
}

int main(){
    push(3);
    push(4);
    push(65);
    push(78);

    cout<<"del elem: "<<pop()<<endl;

    display();

    return 0;
}