## DELETION IN A BINARY TREE

- Delete a node from it by making sure that tree shrinks from the bottom (i.e. the deleted node is replaced by bottom most and rightmost node). Here we do not have any order among elements, so we replace with last element. 

**Algorithm**

1. Starting at root, find the deepest and rightmost node in binary tree and node which we want to delete. 
2. Replace the deepest rightmost node’s data with node to be deleted. 
3. Then delete the deepest rightmost node.
