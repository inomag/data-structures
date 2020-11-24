## CONVERTING NORMAL BST TO BALANCED BST

```
Input:
          4
        /   \
       3     5
      /       \
     2         6 
    /           \
   1             7
Output:
       4
    /    \
   2      6
 /  \    /  \
1    3  5    7
```

- A *Simple Solution* is to traverse nodes in Inorder and one by one insert into a self-balancing BST like AVL tree. Time complexity of this solution is O(nLogn) and this solution doesn’t guarantee.

- An *Efficient Solution* can construct balanced BST in O(n) time with minimum possible height. Below are steps.
    1. Traverse given BST in inorder and store result in an array. This step takes O(n) time. Note that this array would be sorted as inorder traversal of BST always produces sorted sequence.
    2. Build a balanced BST from the above created sorted array using the recursive approach. This step also takes O(n) time as we traverse every element exactly once and processing an element takes O(1) time.
