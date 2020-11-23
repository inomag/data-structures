## INSERT A NODE AT THE END OF A SINGLY LINKED LIST
___
- Since a Linked List is typically represented by the head of it, we have to traverse the list till end and then change the next of last node to new node.

- Time complexity of append is O(n) where n is the number of nodes in linked list. Since there is a loop from head to end, the function does O(n) work.

- This method can also be optimized to work in O(1) by keeping an extra pointer to tail of linked list. 