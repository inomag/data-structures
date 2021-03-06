## MERGE TWO BALANCED BSTs


**Method 1**
- Take all elements of first BST one by one, and insert them into the second BST. Inserting an element to a self balancing BST takes Logn time where n is size of the BST. So time complexity of this method is Log(n) + Log(n+1) … Log(m+n-1). The value of this expression will be between mLogn and mLog(m+n-1). As an optimization, we can pick the smaller tree as first tree.

**Method 2**
1. Do inorder traversal of first tree and store the traversal in one temp array arr1[]. This step takes O(m) time.
2. Do inorder traversal of second tree and store the traversal in another temp array arr2[]. This step takes O(n) time.
3. The arrays created in step 1 and 2 are sorted arrays. Merge the two sorted arrays into one array of size m + n. This step takes O(m+n) time.
4. Construct a balanced tree from the merged array using the technique discussed in this post. This step takes O(m+n) time.

- Time Complexity of this method is O(m+n) even if input BSTs are not balanced.

**Method 3**
We can use a Doubly Linked List to merge trees in place. Following are the steps.
1. Convert the given two Binary Search Trees into doubly linked list in place.
2. Merge the two sorted Linked Lists.
3. Build a Balanced Binary Search Tree from the merged list created in step 2.

- Time Complexity of this method is also O(m+n).