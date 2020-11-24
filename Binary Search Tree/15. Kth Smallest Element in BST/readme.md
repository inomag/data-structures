## Kth SMALLEST ELEMENT IN A BST

**Using Inorder Traversal**

- The Inorder Traversal of a BST traverses the nodes in increasing order. So the idea is to traverse the tree in Inorder. While traversing, keep track of the count of the nodes visited. If the count becomes k, print the node.
- Time Complexity is O(n)