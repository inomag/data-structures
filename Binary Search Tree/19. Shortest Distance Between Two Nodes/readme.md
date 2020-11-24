## SHORTEST DISTANCE BETWEEN TWO NODES IN BST


<img src="https://media.geeksforgeeks.org/wp-content/uploads/shortestdistancebetweennodes.png"
     alt="Markdown Monster icon"
     style="margin-left: 30px;" />
```
Input:  Root of above tree
         a = 3, b = 9
Output: 4
Distance between 3 and 9 in 
above BST is 4.
```

- Algorithm:
   1. If both keys are greater than the current node, we move to the right child of the current node.
    2. If both keys are smaller than current node, we move to left child of current node.
    3. If one keys is smaller and other key is greater, current node is Lowest Common Ancestor (LCA) of two nodes. We find distances of current node from two keys and return sum of the distances.

- Time Complexity is O(h).