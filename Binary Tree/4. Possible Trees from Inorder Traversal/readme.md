## POSSIBLE TREES FROM INORDER TRAVERSAL

- The idea is to maintain a list of roots of all Binary Trees. Recursively construct all possible left and right subtrees. Create a tree for every pair of left and right subtree and add the tree to list. Below is detailed algorithm.

- Algorithm
    1. Initialize list of Binary Trees as empty.  
    2. For every element in[i] where i varies from 0 to n-1,
        do following
        1.  Create a new node with key as 'arr[i]', let this node be 'node'
        2.  Recursively construct list of all left subtrees.
        3.  Recursively construct list of all right subtrees.
    3. Iterate for all left subtrees
        1. For current leftsubtree, iterate for all right subtrees add current left and right subtrees to 'node' and add 'node' to list.