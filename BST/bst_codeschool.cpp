#include<iostream>
using namespace std;

//Definition of Node for Binary search tree
struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;
};

// Function to create a new Node in heap
BstNode* GetNewNode(int data)
{
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// To insert data in BST, returns address of root node
BstNode* Insert(BstNode* root, int data)
{
	if (root == NULL)
	{	// empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree.
	else if (data <= root->data)
	{
		root->left = Insert(root->left, data);
	}
	// else, insert in right subtree.
	else
	{
		root->right = Insert(root->right, data);
	}
	return root;
}

//To search an element in BST, returns true if element is found
bool Search(BstNode* root, int data)
{
	if (root == NULL)
	{
		return false;
	}
	else if (root->data == data)
	{
		return true;
	}
	else if (data <= root->data)
	{
		return Search(root->left, data);
	}
	else
	{
		return Search(root->right, data);
	}
}

// inorder traversal results in sorted order node->data
void inorder_traversal_bst(BstNode *root)
{
	if (root)
	{
		inorder_traversal_bst(root->left);
		cout << root->data << " ";
		inorder_traversal_bst(root->right);
	}
}

// finds the maximum element present in the bst
BstNode * max_node_bst(BstNode *p)
{
	if (p == NULL)
	{
		return NULL;
	}
	while (p->right)
	{
		p = p->right;
	}
	return p;
}

// finds minimum element present in the bst
BstNode *min_node_bst(BstNode *p)
{
	// check if root node is null or not
	if (p == NULL)
	{
		return NULL;
	}
	// while(p's left child is not null)
	while (p->left)
	{
		// shift p to p's left
		p = p->left;
	}
	// return the node
	return p;
}

// finds height of the binary search tree
int height(BstNode *p)
{
	int x, y;
	// if()
	if(!p)
	{
		return 0;
	}
	// calculate height of the left child
	// store in variable x
	x=height(p->left);

	// claculate height of the right sub tree
	// store that value to the varibale y
	y=height(p->right);

	// check for greater height
	if(x>y)
	{
		// add 1 and return
		return x+1;
	}
	else
	{
		return y+1;
	}
	
}

int main()
{
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 20);
	root = Insert(root, 25);
	root = Insert(root, 8);
	root = Insert(root, 12);
	root = Insert(root, 32);
	root = Insert(root, 52);

	// inorder traversal of the bst
	inorder_traversal_bst(root);

	// Ask user to enter a number.
	int number;
	cout << "\nEnter number be searched\n";
	cin >> number;

	//If number is found, print "FOUND"
	if (Search(root, number) == true) cout << "Found\n";
	else cout << "Not Found\n";


	// max element in the bs_tree
	// cout << "Max elment : " << root->data << endl;

	BstNode *max = max_node_bst(root);
	cout << "Max element: " << max->data << endl;

	BstNode *min = min_node_bst(root);
	cout << "Min element: " << min->data << endl;

	cout<<"Height of BST: "<<height(root)<<endl;

	return 0;
}