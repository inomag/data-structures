## DELETION OF A NODE

- When we delete a node, three possibilities arise.
    1. **Node to be deleted is leaf**: Simply remove from the tree. 
    2. **Node to be deleted has only one child**: Copy the child to the node and delete the child.
    3. **Node to be deleted has two children**: Find inorder successor of the node. Copy contents of the inorder successor to the node and delete the inorder successor. Note that inorder predecessor can also be used.

- Optimized Deletion: In the above recursive code, we recursively call delete() for successor. We can avoid recursive call by keeping track of parent node of successor so that we can simply remove the successor by making child of parent as NULL. We know that successor would always be a leaf node.
