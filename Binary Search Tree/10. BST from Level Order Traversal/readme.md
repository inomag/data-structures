## CONSTRUCT BST FROM ITS LEVEL ORDER TRAVERSAL

- We know that the first element will always be the root of tree and second element will be the left child and third element will be the right child (if fall in the range), and so on for all the remaining elements.

    1. First pick the first element of the array and make it root.
    2. Pick the second element, if it’s value is smaller than root node value make it left child,
    3. Else make it right child
    4. Now recursively call the step (2) and step (3) to make a BST from its level Order Traversal.

- Time Complexity is O(n^2).
