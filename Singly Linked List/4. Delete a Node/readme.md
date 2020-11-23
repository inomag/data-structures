## DELETE THE NODE FOR A GIVEN KEY IN SINGLY LINKED LIST
___
- To delete a node from the linked list, we need to do the following steps. 
    1. Find the previous node of the node to be deleted. 
    2. Change the next of the previous node. 
    3. Free memory for the node to be deleted.

- Since every node of the linked list is dynamically allocated using malloc() in C, we need to call free() for freeing memory allocated for the node to be deleted.