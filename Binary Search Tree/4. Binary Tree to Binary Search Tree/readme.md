## CONVERSION OF BINARY TREE TO BINARY SEARCH TREE

```
Input:
          10
         /  \
        2    7
       / \
      8   4
Output:
          8
         /  \
        4    10
       / \
      2   7
```

- Algorithm:
    1. Create a temp array arr[] that stores inorder traversal of the tree. This step takes O(n) time.
    2. Sort the temp array arr[]. Time complexity of this step depends upon the sorting algorithm. In the following implementation, Quick Sort is used which takes (n^2) time. This can be done in O(nLogn) time using Heap Sort or Merge Sort.
    3. Again do inorder traversal of tree and copy array elements to tree nodes one by one. This step takes O(n) time.

- Time Complexity is O(nlogn). This is the complexity of the sorting algorithm which we are using after first in-order traversal, rest of the opertions take place in linear time.