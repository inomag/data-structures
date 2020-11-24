## FIND PAIRS WITH A GIVEN SUM IN BST


<img src="https://www.geeksforgeeks.org/wp-content/uploads/BinaryTree3-300x188.png"
     alt="Markdown Monster icon"
     style="margin-left: 30px;" />
```
Input : sum = 28
        Root of below tree
Output : Pair is found (16, 12)
```

- We traverse binary search tree by inorder way and insert node’s value into a set. Also check for any node, difference between given sum and node’s value in set, if it is found then pair exists otherwise it doesn’t exist.
- Time Complexity is O(n).