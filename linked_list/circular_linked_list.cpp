/* In this program we'll be implementing circular linked list
And also some of its common operations
*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head;

void create_list(int A[], int n)
{
    struct Node *temp, *last;

    head = (struct Node *)malloc(sizeof(struct Node));

    head->data=A[0];
    head->next=head;
    last=head;

    for(int i=0; i<n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data=A[i];
        temp->next=last->next;
        last->next=temp;

        last = temp;
    }
}



int main()
{
    int A[]={2,3,4,5,6};
    create_list(A,5);

    return 0;
}