## PRINT KEYS OF BST IN GIVEN RANGE

Graph:
<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/BST_3311.gif"
     alt="Markdown Monster icon"
     style="margin-left: 30px;" />
```
Input: k1 = 10 and k2 = 22
Output: 12, 20 and 22.
Explanation: The keys are 4, 8, 12, 20, and 22.
So keys in range 10 to 22 is 12, 20 and 22.
```

- **Approach**: Traverse the tree in the inorder traversal. If the Binary search tree is traversed in inorder traversal the keys are traversed in increasing order. So while traversing the keys in the inorder traversal. If the key lies in the range print the key else skip the key.

- **Algorithm**:
    1. Create a recursive function that takes root as a parameter and the range is (k1, k2)
    2. If the value of root’s key is greater than k1, then recursively call in left subtree.
    3. If the value of root’s key is in range, then print the root’s key.
    4. If the value of root’s key is smaller than k2, then recursively call in the right subtree.

- Time Complexity is O(n).