/*
 * binarytree.cpp
 *
 *  Created on: Jan 12, 2016
 *      Author: Khimya
 */

/*Binary Tree: A tree whose elements have at most 2 children is called a binary tree.
 * Since each element in a binary tree can have only 2 children,
 * we typically name them the left and right child.*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

/* newNode() allocates a new node with the given data and NULL left and
   right pointers. */
struct node* newNode(int data){
	struct node* node = (struct node*)malloc(sizeof(struct node*));

	node->data = data;

	node->left = NULL;
	node->right = NULL;

	return(node);
}

/*Algorithm Postorder(tree)
   1. Traverse the left subtree, i.e., call Postorder(left-subtree)
   2. Traverse the right subtree, i.e., call Postorder(right-subtree)
   3. Visit the root*/
void printPostorder(struct node* node){

	if(node== NULL)
		return;
	printPostorder(node->left);
	printPostorder(node->right);
	cout<< node->data << endl;

}

/*Algorithm Preorder(tree)
   1. Visit the root.
   2. Traverse the left subtree, i.e., call Preorder(left-subtree)
   3. Traverse the right subtree, i.e., call Preorder(right-subtree)*/
void printPreorder(struct node* node){

	if(node== NULL)
		return;
	cout<< node->data << endl;
	printPreorder(node->left);
	printPreorder(node->right);
}


/*Algorithm Inorder(tree)
   1. Traverse the left subtree, i.e., call Inorder(left-subtree)
   2. Visit the root.
   3. Traverse the right subtree, i.e., call Inorder(right-subtree)*/
void printInorder(struct node* node){

	if(node== NULL)
		return;
	printInorder(node->left);
	cout<< node->data << endl;
	printInorder(node->right);
}



int main(){

	struct node *root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

    cout<<" \n Preorder Traversal of binary tree is \n";
	printPreorder(root);

	cout<<" \n Inorder Traversal of binary tree is \n";
	printInorder(root);


	cout<<" \n Postorder Traversal of binary tree is \n";
	printPostorder(root);

	getchar();
	return 0;
}
