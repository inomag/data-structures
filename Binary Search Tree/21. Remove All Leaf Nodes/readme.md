## REMOVE ALL LEAF NODES FROM A BST

```
Input : 20 10 5 15 30 25 35
Output : Inorder before Deleting the leaf node
         5 10 15 20 25 30 35
         Inorder after Deleting the leaf node
         10 20 30

        This is the binary search tree where we
        want to delete the leaf node.
              20
           /     \
          10      30
         /  \    /  \
       5     15 25   35 

      After deleting the leaf node the binary 
      search tree looks like
              20
           /     \
          10      30
```

- We traverse given Binary Search Tree in inorder way. During traversal we check if current node is leaf, if yes, we delete it. Else we recur for left and right children. An important thing to remember is, we must assign new left and right children if there is any modification in roots of subtrees.