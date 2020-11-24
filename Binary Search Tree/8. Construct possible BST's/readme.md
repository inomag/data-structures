## CONSTRUCT ALL POSSIBLE BST's FOR KEYS 1 TO N

```
For example, for N = 2, there are 2 unique BSTs
     1               2  
      \            /
       2         1 

For N = 3, there are 5 possible BSTs
  1              3        3         2      1
    \           /        /        /  \      \
     3        2         1        1    3      2
    /       /            \                    \
   2      1               2                    3
```

**Algorithm:**
1. Initialize list of BSTs as empty.  
2. For every number i where i varies from 1 to N, do following
a)  Create a new node with key as 'i', let this node be 'node'
b)  Recursively construct list of all left subtrees.
c)  Recursively construct list of all right subtrees.
3. Iterate for all left subtrees
a) For current leftsubtree, iterate for all right subtrees. Add current left and right subtrees to 'node' and add      'node' to list.

- All node in left subtree are smaller than root and in right subtree are larger than root so if we have ith number as root, all numbers from 1 to i-1 will be in left subtree and i+1 to N will be in right subtree. If 1 to i-1 can form x different trees and i+1 to N can from y different trees then we will have x*y total trees when ith number is root and we also have N choices for root also so we can simply iterate from 1 to N for root and another loop for left and right subtree.
