## CHECK IF TWO BSTs CONTAIN SAME ELEMENTS

**Method 1**
- The most simple method will be to traverse first tree and store its element in a list or array. Now, traverse 2nd tree and simultaneously check if the current element is present in the list or not. If yes, then mark the element in the list as negative and check for further elements otherwise if no, then immediately terminate the traversal and print No. If all the elements of 2nd tree is present in the list and are marked negative then finally traverse the list to check if there are any non-negative elements left. If Yes then it means that the first tree had some extra element otherwise the both tree consists same set of elements.
- Time Complexity is O(n*n).

**Method 2**
- We can optimize this operation to be done in constant time using a hashmap instead of list. We insert elements of both trees in different hash sets. Finally we compare if both hash sets contain same elements or not.
- Time Complexity becomes O(n).

**Method 3**
- We know about an interesting property of BST that inorder traversal of a BST generates a sorted array. So we can do inorder traversals of both the BSTs and generate two arrays and finally we can compare these two arrays. If both of the arrays are same then the BSTs have same set of elements otherwise not.

- Time Complexity is O(n).