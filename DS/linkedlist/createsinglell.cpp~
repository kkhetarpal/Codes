//============================================================================
// Name        : DS.cpp
// Author      : Khimya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


struct node{
	int data;
	struct node *next;
};



int main() {

	struct node *head = NULL;
	struct node *second = NULL;
	struct node *third = NULL;

	head = (struct node*) malloc (sizeof(struct node));
	second = (struct node*) malloc (sizeof(struct node));
	third = (struct node*) malloc (sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    cout << "!!!Singly linked list of three nodes created!!!" << endl;
    cout << " The linked list is as follows " <<  endl;
    cout << head->data << " -> " << second->data << " -> " << third->data  << endl;
	return 0;
}
