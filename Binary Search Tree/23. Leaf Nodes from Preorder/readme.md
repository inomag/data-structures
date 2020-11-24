## LEAF NODES FROM PREORDER OF BST

```
Input : preorder[] = {890, 325, 290, 530, 965};
Output : 290 530 965
Explanation : Tree represented is,
      890
     /   \
  325    965
  /  \
290   530
```

- The idea is to find Iorder, then traverse the tree in preorder fashion (using both inorder and postorder traversals) and while traversing print leaf nodes.

- We iterate the preorder array and for each element find that element in the inorder array. For searching, we can use binary search, since inorder traversal of the binary search tree is always sorted. Now, for each element of preorder array, in binary search, we set the range [L, R].
And when L == R, the leaf node is found. So, initially, L = 0 and R = n – 1 for first element (i.e root) of preorder array. Now, to search for the element on the left subtree of the root, set L = 0 and R = index of root – 1. Also, for all element of right subtree set L = index of root + 1 and R = n -1.
Recursively, follow this, until L == R.

**Using Recursion**
- The idea is to use two min and max variables and taking i (index in input array), the index for given preorder array, and recursively creating root node and correspondingly checking if left and right are existing or not. This method return boolean variable, and if both left and right are false it simply means that left and right are null hence it must be a leaf node so print it right there and return back true as root at that index existed.