## CONSTRUCTING TREE FROM PREORDER & INORDER TRAVERSAL

- n a Preorder sequence, leftmost element is the root of the tree. So we know ‘A’ is root for given sequences. By searching ‘A’ in Inorder sequence, we can find out all elements on left side of ‘A’ are in left subtree and elements on right are in right subtree.

- Algorithm
    1. Pick an element from Preorder. Increment a Preorder Index Variable (preIndex in below code) to pick next element in next recursive call.
    2. Create a new tree node tNode with the data as picked element.
    3. Find the picked element’s index in Inorder. Let the index be inIndex.
    4. Call buildTree for elements before inIndex and make the built tree as left subtree of tNode.
    5. Call buildTree for elements after inIndex and make the built tree as right subtree of tNode.
    6. return tNode.

- Time Complexity is O(n^2). Worst case occurs when tree is left skewed.

