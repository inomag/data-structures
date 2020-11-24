# BINARY SEARCH TREE
___

- Acc. to wikipedia, following is the definition of Binary Search Tree.

- Binary Search Tree is a node-based binary tree data structure which has the following properties:
    - The left subtree of a node contains only nodes with keys lesser than the node’s key.
    - The right subtree of a node contains only nodes with keys greater than the node’s key.
    - The left and right subtree each must also be a binary search tree. 
    - There must be no duplicate nodes.

*Searching a key in BST*

- Algorithm: we’ll do is we’ll start at the root, and then we will compare the value to be searched with the value of the root if it’s equal we are done with the search if it’s lesser we know that we need to go to the left subtree because in a binary search tree all the elements in the left subtree are lesser and all the elements in the right subtree are greater.
-  We call a tree balanced if for all nodes the difference between the heights of left and right subtrees is not greater than one.
- Worst Time Complexity is O(h), where h is the height of the tree. This case occurs when traversal from root to deepest leaf node occurs.

```
struct node* search(struct node* root, int key){ 
    // Base Cases: root is null or key is present at root 
    if (root == NULL || root->key == key) 
       return root; 
    // Key is greater than root's key 
    if (root->key < key) 
       return search(root->right, key); 
    // Key is smaller than root's key 
    return search(root->left, key); 
}
```

- Inorder traversal of BST always produces a sorted output.
- 