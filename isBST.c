
//Check whether a given binary tree is a binary search tree or not. The below program uses recursion.
//A binary search tree is a binary tree in which the value of each node is greater than all nodes in its left subtree and smaller than all nodes in its right sub tree. 

#include <stdio.h>
#define MIN -1;
#define MAX 100;

//Structure of a tree node
struct node{
int data;
struct node *left;
struct node *right;
};

// The function will return true if the given tree is a BST
int isBinarySearchTree(struct node* node, int min, int max) {
 if (node == NULL) 
	return(true);

if ( (node->data < min) || (node->data > max)) 
		return(false);
		
// Check both subtrees recursively
  return isBinarySearchTree(node->left, min, node->data) && isBinarySearchTree(node->right, node->data+1, max);
}
int main()
{
//create few binary tree nodes
node *leftLeftNode = (node *)malloc(sizeof(node));
leftLeftNode -> data = 2;
leftLeftNode -> left = NULL;
leftLeftNode -> right = NULL;

node *leftRightNode = (node *)malloc(sizeof(node));
leftLeftNode -> data = 4;
leftLeftNode -> left = NULL;
leftLeftNode -> right = NULL;

node *leftNode = (node *)malloc(sizeof(node));
leftLeftNode -> data = 3;
leftLeftNode -> left = leftLeftNode;
leftLeftNode -> right = leftRightNode;

node *rightNode = (node *)malloc(sizeof(node));
leftLeftNode -> data = 7;
leftLeftNode -> left = NULL;
leftLeftNode -> right = NULL;

node *rootNode = (node *)malloc(sizeof(node));
leftLeftNode -> data = 6;
leftLeftNode -> left = leftNode;
leftLeftNode -> right = rightNode;

printf("%d", isBinarySearchTree( rootNode ));
return 0;	
}

