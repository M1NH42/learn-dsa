#include <bits/stdc++.h>
using namespace std;

struct Node
{
	struct Node *l_child;
	int data;
	struct Node *r_child;
}*root = NULL;

void insert_in_bst(struct Node *t, int key)
{
	struct Node *r = NULL, *p; // p pointer to create a new node

	if (root == NULL)
	{
		p = (struct Node *)malloc(sizeof(struct Node));
		p->data = key;
		p->l_child = p->r_child = NULL;
		root = p;
		return;
	}
	while (t != NULL)
	{
		r = t;
		if (key < t->data)
		{
			t = t->l_child;
		}
		else if (key > t->data)
		{
			t = t->r_child;
		}
		else
		{
			return;
		}
	}
	p = (struct Node *)malloc(sizeof(struct Node));
	p->data = key;
	p->l_child = p->r_child = NULL;

	if (key > p->data)
		r->r_child = p;
	else
		r->l_child = p;
}

/*struct Node * rec_insert_in_bst(struct Node *p, int key)
{
	Node *t;
	if (!p)
	{
		t = new Node;
		t->l_child = t->r_child = NULL;
		return t;
	}
	if (key < p->data)
		p->l_child = rec_insert_in_bst(p->l_child, key);
	else if (key > p->data)
		p->r_child = rec_insert_in_bst(p->r_child, key);
	return p;
}*/

void inorder_traverse(struct Node *p)
{
	if (p != NULL)
	{
		inorder_traverse(p->l_child);
		cout << p->data << " ";
		inorder_traverse(p->r_child);
	}
}

// search an elment in the bs tree
struct Node * search_bst(struct Node *p, int key)
{
	// struct Node *p = root;

	while (p != NULL)
	{
		if (key == p->data)
			return p;
		else if (key < p->data)
			p = p->l_child;
		else
			p = p->r_child;
	}
	return NULL;
}

int main()
{
	root = insert_in_bst(root, 10);
	insert_in_bst(root, 5);
	insert_in_bst(root, 20);
	insert_in_bst(root, 8);
	insert_in_bst(root, 30);

	// call inorder
	inorder_traverse(root);

	struct Node *tmp;
	tmp = search_bst(root, 30);

	if (tmp)
		cout << "Element " << tmp->data << " is found\n";
	else
		printf("Not found\n");

	return 0;
}