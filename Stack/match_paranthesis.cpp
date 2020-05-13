#include<bits/stdc++.h>

using namespace std;

struct Node{
    char data;
    struct Node *next;
}*top=NULL;

void push(char x){
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

char pop()
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

int is_balanced(char *exp){
    for(int i=0; exp[i] != "\0"; i++){
        if (exp[i]=='(' ){
            push(exp[i]);
        }else if (exp[i]==')'){
            if(top==NULL){
                return 0;
            }
            pop();
        }
    }
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char *exp = '((a+b)*(c-d))';

    cout<<is_balanced(exp)<<endl;

    return 0;
}