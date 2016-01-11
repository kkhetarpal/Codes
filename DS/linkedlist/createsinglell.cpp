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

bool search(struct node* head, int x){

	if(head == NULL)
		return false;

	if(head->data == x)
		return true;

	return search(head->next, x);
}



int getCount(struct node* head){
	int count = 0;
    struct node* current = head;
    while(current != NULL){
    	count++;
    	current = current->next;
    }
	return count;
}




int getCount_rec(struct node* head){

	if(head == NULL)
		return 0;

	return 1 + getCount_rec(head->next);
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


/* Given a reference (pointer to pointer) to the head of a list
   and a key, deletes the first occurrence of key in linked list */
void deleteNodebyPosition(struct node** head_ref, int position){

	if (*head_ref == NULL)          //if the ll is empty
		return;

	struct node* temp = *head_ref;  //Store the head node

	if (position == 0)             //If head is to be deleted
	{
		*head_ref = temp->next;    //Change head to next of head
		free(temp);                //Free the old head
		return;
	}

	for (int i=0; temp != NULL && i<position-1; i++)  //previous of the node to be deleted
		temp =  temp->next;

	if (temp == NULL || temp->next == NULL)
		return;

	struct node *next = temp->next->next;

	free(temp->next);  //Free the node where position is

	temp->next = next; //previous to the node to be deleted should now point to the next of temp

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


    cout << endl;
    deleteNodebyPosition(&head, 1);
    printlinklist(head);

    cout << endl;
    push(&head, 5);
    printlinklist(head);

    cout << endl;
    cout<< "The number of nodes are " <<  getCount_rec(head);

    cout << endl << "Do we have 7 in the list ? ";
    search(head,7) ? printf("Yes") : printf("No");
	return 0;
}

