// C++ program to count occurrences in 
// a linked list using recursion 
#include <bits/stdc++.h> 
using namespace std; 

/* Link list node */
struct Node { 
	int data; 
	struct Node* next; 
}; 
// global variable for counting frequeancy of 
// given element k 
int frequency = 0; 

/* Given a reference (pointer to pointer) to the head 
of a list and an int, push a new node on the front 
of the list. */
void push(struct Node** head_ref, int new_data) 
{ 
	/* allocate node */
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 

	/* put in the data */
	new_node->data = new_data; 

	/* link the old list off the new node */
	new_node->next = (*head_ref); 

	/* move the head to point to the new node */
	(*head_ref) = new_node; 
} 

/* Counts the no. of occurrences of a node 
(search_for) in a linked list (head)*/
int count(struct Node* head, int key) 
{ 
	if (head == NULL) 
		return frequency; 
	if (head->data == key) 
		frequency++; 
	return count(head->next, key); 
} 

/* Driver program to test count function*/
int main() 
{ 
	/* Start with the empty list */
	struct Node* head = NULL; 

	/* Use push() to construct below list 
	1->2->1->3->1 */
	push(&head, 1); 
	push(&head, 3); 
	push(&head, 1); 
	push(&head, 2); 
	push(&head, 1); 

	/* Check the count function */
	cout << "count of 1 is " << count(head, 1); 
	return 0; 
} 
