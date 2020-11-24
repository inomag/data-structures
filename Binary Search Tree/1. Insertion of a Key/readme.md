## INSERTION OF A KEY

- A new key is always inserted at the leaf. We start searching a key from the root until we hit a leaf node. Once a leaf node is found, the new node is added as a child of the leaf node. 
- Worst Time Complexity is O(h), where h is the height of the tree. This case occurs when traversal from root to deepest leaf node occurs.