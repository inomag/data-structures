## Kth LARGEST ELEMENT IN BST

**Using Reverse Inorder Traversal**
- Algorithm
    1. The idea is to do reverse inorder traversal of BST. Keep a count of nodes visited.
    2. The reverse inorder traversal traverses all nodes in decreasing order, i.e, visit the right node then centre then left and continue traversing the nodes recursively.
    3. While doing the traversal, keep track of the count of nodes visited so far.
    4. When the count becomes equal to k, stop the traversal and print the key.

- Time Complexity is O(h+k). The code first traverses down to the rightmost node which takes O(h) time, then traverses k elements in O(k) time. Therefore overall time complexity is O(h+k).