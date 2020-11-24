## CHECK IF A BINARY TREE IS BST OR NOT

- A binary search tree (BST) is a node based binary tree data structure which has the following properties.
    - The left subtree of a node contains only nodes with keys less than the node’s key.
    - The right subtree of a node contains only nodes with keys greater than the node’s key.
    - Both the left and right subtrees must also be binary search trees.

**Method 1 (Inefficient)**
- For each node, check if max value in left subtree is smaller than the node and min value in right subtree greater than the node. It is assumed that you have helper functions minValue() and maxValue() that return the min or max int value from a non-empty tree.
```
int isBST(struct node* node){  
  if (node == NULL)  
    return 1;  
  /* false if the max of the left is > than us */
  if (node->left!=NULL && maxValue(node->left) > node->data)  
    return 0;  
  /* false if the min of the right is <= than us */
  if (node->right!=NULL && minValue(node->right) < node->data)  
    return 0;  
  /* false if, recursively, the left or right is not a BST */
  if (!isBST(node->left) || !isBST(node->right))  
    return 0;  
  /* passing all that, it's a BST */
  return 1;  
} 
```
**Method 2 (Efficient)**
- The trick is to write a utility helper function isBSTUtil(struct node* node, int min, int max) that traverses down the tree keeping track of the narrowing min and max allowed values as it goes, looking at each node only once. The initial values for min and max should be INT_MIN and INT_MAX — they narrow from there.
- Time Complexity is O(n).

**Method 3 (Inorder Traversal)**
1. Do In-Order Traversal of the given tree and store the result in a temp array.
2. Check if the temp array is sorted in ascending order, if it is, then the tree is BST.
```
bool isBST(struct node* root){ 
    static struct node *prev = NULL; 
    // traverse the tree in inorder fashion and keep track of prev node 
    if (root){ 
        if (!isBST(root->left)) 
          return false; 
        // Allows only distinct valued nodes  
        if (prev != NULL && root->data <= prev->data) 
          return false; 
        prev = root; 
        return isBST(root->right); 
    } 
    return true; 
}
```