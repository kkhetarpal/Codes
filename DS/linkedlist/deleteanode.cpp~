//============================================================================
// Name        : DS.cpp
// Author      : Khimya
// Version     :
// Copyright   : Your copyright notice
// Description : Delete a Node - Linked Lists
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


struct node{
	int data;
	struct node *next;
};

/*Linked List Traversal*/
void printlinklist(struct node* n){
	while( n!= NULL){
		printf(" %d ", n->data);
		n= n->next;
	}
}

/* Given a reference (pointer to pointer) to the head of a list
   and an int,  inserts a new node on the front of the list. */
void push(struct node** head_ref, int new_data){

	struct node* new_node = (struct node*)malloc(sizeof(struct node));

	new_node->data = new_data; //put in the new data

	new_node->next = (*head_ref); //new_node's next is head_ref

	(*head_ref) = new_node; //now the head points to the new_node
}



/* Given a node prev_node, insert a new node after the given
   prev_node */
void insertafter(struct node* prev_node, int new_data){

	if(prev_node == NULL){
		printf("the previous node is empty, nothing to insert after");
		return;
	}

	struct node* new_node = (struct node*)malloc(sizeof(struct node));

	new_node->data = new_data;

	new_node->next = prev_node->next;

	prev_node->next = new_node;

}


/* Given a reference (pointer to pointer) to the head
   of a list and an int, appends a new node at the end  */
void append(struct node** head_ref, int new_data){

	struct node* new_node = (struct node*)malloc(sizeof(struct node));

	struct node* last = *head_ref;

	new_node->data = new_data;
	new_node->next = NULL;

	if(*head_ref == NULL){
		*head_ref = new_node;
		return;
	}

	while(last->next != NULL){
		last = last->next;
	}

	last->next = new_node;
	return;
}

/* Given a reference (pointer to pointer) to the head of a list
   and a key, deletes the first occurrence of key in linked list */
void deleteNode(struct node** head_ref, int key){

	struct node* temp = *head_ref, *previous;

	/*if the first node itself holds the key*/
	if(temp != NULL && temp->data == key){
		*head_ref = temp->next;
		free(temp);
	}

	while(temp != NULL && temp->data != key){
		previous = temp;
		temp = temp->next;
	}

	if(temp == NULL)
		return;
	previous->next = temp->next;

	free(temp);
}

int main() {

	struct node* head = NULL;

    cout << "!!!Singly linked list of three nodes created!!!" << endl;
    cout << " The linked list is as follows " <<  endl;
    printlinklist(head);

    cout << endl;              //Testing Inserting a node at the beginning of a linked list
    push(&head,7);
    push(&head,1);
    push(&head,3);
    push(&head,2);
    printlinklist(head);

    cout << endl;
    deleteNode(&head, 1);
    printlinklist(head);

	return 0;
}

