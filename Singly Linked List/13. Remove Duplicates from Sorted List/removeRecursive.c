/* C recursive Program to remove duplicates from a sorted linked list */
#include<stdio.h> 
#include<stdlib.h> 

/* Link list node */
struct Node 
{ 
	int data; 
	struct Node* next; 
}; 
/* UTILITY FUNCTIONS */
/* Function to insert a node at the beginging of the linked list */
void push(struct Node** head_ref, int new_data) 
{ 
	/* allocate node */
	struct Node* new_node = 
			(struct Node*) malloc(sizeof(struct Node)); 
			
	/* put in the data */
	new_node->data = new_data; 
				
	/* link the old list off the new node */
	new_node->next = (*head_ref);	 
		
	/* move the head to point to the new node */
	(*head_ref) = new_node; 
} 

/* Function to print nodes in a given linked list */
void printList(struct Node *node) 
{ 
	while (node!=NULL) 
	{ 
	printf("%d ", node->data); 
	node = node->next; 
	} 
} 

Node* deleteDuplicates(Node* head) { 
		if (head == nullptr) return nullptr; 
		if (head->next == nullptr) return head; 

		if (head->data == head->next->data) { 
			Node *tmp; 
			// If find next element duplicate, preserve the next pointer to be deleted, 
			// skip it, and then delete the stored one. Return head 
			tmp = head->next; 
			head->next = head->next->next; 
			free(tmp); 
			return deleteDuplicates(head); 
		} 

		else { 

			// if doesn't find next element duplicate, leave head 
			// and check from next element 
			head->next = deleteDuplicates(head->next); 
			return head; 
		} 
	} 

int main() 
{ 
	/* Start with the empty list */
	struct Node* head = NULL; 
	
	/* Let us create a sorted linked list to test the functions 
	Created linked list will be 11->11->11->13->13->20 */
	push(&head, 20); 
	push(&head, 13); 
	push(&head, 13); 
	push(&head, 11); 
	push(&head, 11); 
	push(&head, 11);									 

	printf("\n Linked list before duplicate removal "); 
	printList(head); 

	/* Remove duplicates from linked list */
	head = deleteDuplicates(head); 

	printf("\n Linked list after duplicate removal ");		 
	printList(head);			 
	
	return 0; 
} 
/* This code is contributed by Yogesh shukla */
