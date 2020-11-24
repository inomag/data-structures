## CONVERSION OF SORTED LINKED LIST TO BALANCED BST

```
Input:  Linked List 1->2->3->4->5->6
Output: A Balanced BST
      4   
    /   \  
   2     6 
 /  \   / 
1   3  5
```
**Method 1 (Simple)**
1. Get the Middle of the linked list and make it root.
2. Recursively do same for the left half and right half.
       1. Get the middle of the left half and make it left child of the root
          created in step 1.
       2. Get the middle of right half and make it the right child of the
          root created in step 1.
- Time Complexity is O(nlogn).

**Method 2 (Tricky)**
- Method 1 constructs the tree from root to leaves. In this method, we construct from leaves to root. The idea is to insert nodes in BST in the same order as they appear in Linked List so that the tree can be constructed in O(n) time complexity. We first count the number of nodes in the given Linked List. Let the count be n. After counting nodes, we take left n/2 nodes and recursively construct the left subtree. After left subtree is constructed, we allocate memory for root and link the left subtree with root. Finally, we recursively construct the right subtree and link it with root.
- While constructing the BST, we also keep moving the list head pointer to next so that we have the appropriate pointer in each recursive call.
- Time Complexity is O(n).