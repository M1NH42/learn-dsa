#include<bits/stdc++.h>

using namespace std;

// typedef
// typedef rep(i,a,b) for(int i=a, i<b; i++)

struct Stack
{
    int size;
    int top;
    int *S;
};

void create_stack(struct Stack *st)
{
    cout<<"Enter size\n";
    cin>>st->size;

    st->top=-1;

    st->S=(int *)malloc(st->size * sizeof(int));
}

// display the stack
void display(struct Stack st)
{
    for(int i=st.top; i>=0; i--)
    {
        cout<<st.S[i]<<"\n";
    }
    cout<<"\n";
}

/* *********** operations ************* */
void push(struct Stack *st, int x)
{
    if (st->top == st->size-1)
    {
        cout<<"stack overflow!\n";
    }
    else
    {
        st->top++;
        st->S[st->top]=x;
    }
}

// 2. pull()
int pop(struct Stack *st)
{
    int x =-1;
    if (st->top==-1)
    {
        cout<<"stack underflow!\n";
    }
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

int main()
{
    struct Stack st;

    create_stack(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);

    display(st);

    /* ** pop ** */
    pop(&st);

    display(st);


    return 0;
}