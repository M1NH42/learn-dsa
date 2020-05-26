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

// defn of the Node
struct Node
{
    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
} *root = NULL; // initially root is null


// returns height of the root
int node_height(struct Node *p)
{
    // init left height, right height
    int hl, hr;
    hl=p && p->lchild?p->lchild->height:0;
    hr=p && p->rchild?p->rchild->height:0;

    // returns height
    return hl>hr ? hl+1 : hr+1;
}

// Returns the balance factor which is : height(left_subtree) - height(right_subtree)
int balance_factor(struct Node *p)
{
    // initialize height of the left sub tree and height of the right sub tree
    int hl, hr;

    // conditional for the left sub tree
    hl=p && p->lchild?p->lchild->height:0;

    // condtionals for the right sub tree
    hr=p && p->rchild?p->rchild->height:0;

    // return the difference
    return hl-hr;
}

// Returns newnode by setting data to the node
// height of the new_node
// and returns the pointer to the newnode
struct Node * get_new_node(int data)
{
    // create new node
    struct Node * new_node;

    // assign memory in the heap
    new_node = (struct Node *)malloc(sizeof(struct Node));

    // store data in the new_node data
    new_node->data = data;

    // set initial height as one (1)
    new_node->height = 1;

    // set left and right child as null
    new_node->lchild = new_node->rchild = NULL;

    return new_node;
}

// This actually performs the rotation on the particular node
// aplly the rotation on left of the left node
struct Node * left_left_rot(struct Node * p)
{
    Node * pl = p->lchild;
    Node * plr = pl->rchild;

    pl->rchild=p;
    p->lchild=plr;

    p->height=node_height(p);
    pl->height=node_height(pl);

    if(root==p)
    {
        root=pl;
    }
    return pl;
}

// insert the newnode to the AVL tree
// the function is almost similar to the insertion in the 
// bst, key differnce is that it takes in consdration the height
// of the node
struct Node * insert_in_avl(struct Node *p, int key)
{
    // check if there's any node
    if(p == NULL)
    {
        p = get_new_node(key);
    }
    // if key is less than the node's data
    // move to left sub tree
    else if(key <= p->data)
    {
        p->lchild = insert_in_avl(p->lchild, key);
    }
    else
    {
        // else
        // move to right sub tree
        p->rchild = insert_in_avl(p->rchild, key);
    }

    p->height = node_height(p);

    // ROTATIONS ACC. TO NEED
    if(balance_factor(p) == 2 && balance_factor(p->lchild)==1)
    {
        return left_left_rot(p);
    }

    /* else if(balance_factor(p) == 2 && balance_factor(p->lchild ==-1))
    {
        return left_right_rot(p);
    }
    else if(balance_factor(p) == -2 && balance_factor(p->lchild == -1))
    {
        return right_right_rot(p);
    }
    else if(balance_factor(p) == -2 && balance_factor(p->lchild ==1))
    {
        return right_left_rot(p);
    } */

    return p;
    
}


// Inorder traversal of the AVL tree
void inorder_traversal_AVL(struct Node *p)
{
    // Perform only if there is node present
    if(p!=NULL)
    {
        inorder_traversal_AVL(p->lchild);
        cout<<p->data<<" ";
        inorder_traversal_AVL(p->rchild);
    }
}

int main()
{

    // insert in the tree
    // set as root node
    root = insert_in_avl(root, 50);
    insert_in_avl(root, 30);
    insert_in_avl(root, 20);

    // called inorder traversal
    inorder_traversal_AVL(root);


    return 0;
}