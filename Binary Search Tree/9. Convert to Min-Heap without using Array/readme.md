## CONVERT GIVEN BST TO MIN-HEAP WITHOUT USING ARRAY

```
Input: Binary Search Tree
        8
     /    \
    4      12
  /  \     /  \
 2    6   10  14


Output - Min Heap
       2
     /    \
   4        6
 /  \     /   \
8    10  12   14
[Or any other tree that follows Min Heap
 properties and has same keys]
```

- If we are allowed to use extra space, we can perform inorder traversal of the tree and store the keys in an auxiliary array. As we’re doing inorder traversal on a BST, array will be sorted. We construct the binary tree level by level and from left to right by taking next minimum element from sorted array. The constructed binary tree will be a min-Heap. This solution works in O(n) time, but is not in-place.

The idea is to convert the binary search tree into a sorted linked list first. We can do this by traversing the BST in inorder fashion. We add nodes at the beginning of current linked list and update head of the list using pointer to head pointer. Since we insert at the beginning, to maintain sorted order, we first traverse the right subtree before the left subtree. i.e. do a reverse inorder traversal.

Finally we convert the sorted linked list into a min-Heap by setting the left and right pointers appropriately. We can do this by doing a Level order traversal of the partially built Min-Heap Tree using queue and traversing the linked list at the same time. At every step, we take the parent node from queue, make next two nodes of linked list as children of the parent node, and enqueue the next two nodes to queue. As the linked list is sorted, the min-heap property is maintained.