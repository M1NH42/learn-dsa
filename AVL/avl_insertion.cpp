/* In this program we'll be implementing AVL insertion and deletion */

/* Intro: AVL is nothing but a self balancing binary search tree
   * can also be called as perfect binary search tree
   * Makes searchig much faster than the regular BST
   * search operation depends on the height of the bi
   * nary search tree so in avl tree balancing factor
   * takes care of the height to minimum which results
   * in the search operation of the order (log(n)) */

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
} *root = NULL;

int node_height(struct Node *p)
{
    int hl, hr;
    hl=p && p->lchild?p->lchild->height:0;
    hr=p && p->rchild?p->rchild->height:0;

    return hl>hr ? hl+1 : hr+1;
}

int balance_factor(struct Node *p)
{
    int hl, hr;
    hl=p && p->lchild?p->lchild->height:0;
    hr=p && p->rchild?p->rchild->height:0;

    return hl-hr;
}

struct Node * get_new_node(int data)
{
    struct Node * new_node;
    new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->lchild = new_node->rchild = NULL;

    return new_node;
}

struct Node * insert_in_avl(struct Node *p, int key)
{
    // check if there's any node
    if(p == NULL)
    {
        p = get_new_node(key);
    }
    else if(key <= p->data)
    {
        p->lchild = insert_in_avl(p->lchild, key);
    }
    else
    {
        p->rchild = insert_in_avl(p->rchild, key);
    }
    return p;
    
}

int main()
{
  return 0;
}