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

// 3. peek(pos)
int peek(struct Stack st, int pos)
{
    int x=-1;

    if(st.top-pos+1 < 0)
    {
        cout<<"invalid pos\n";
    }
    else
    {
        x=st.S[st.top-pos+1];
    }
    return x;
}

// 4. stack_top
int stack_top(struct Stack st)
{
    if(st.top==-1)
    {
        return -1;
    }
    return st.S[st.top];
}

// 5. is_empty()
int is_empty(struct Stack st)
{
    if(st.top == -1)
    {
        return 1;
    }
    return 0;
}

// 6. is_full()
int is_full(struct Stack st)
{
    if(st.top==st.size-1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    struct Stack st;

    create_stack(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);

    // display(st);

    /* ** pop ** */
    // pop(&st);

    cout<<"Element at idx : "<<peek(st, 3)<<endl;

    display(st);

    cout<<"top : "<<stack_top(st)<<endl;


    return 0;
}