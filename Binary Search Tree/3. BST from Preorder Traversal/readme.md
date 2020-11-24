## CONSTRUCTION OF BST FROM GIVEN PREORDER TRAVERSAL

**Method 1**
- The first element of preorder traversal is always root. We first construct the root. Then we find the index of first element which is greater than root. Let the index be ‘i’. The values between root and ‘i’ will be part of left subtree, and the values between ‘i+1’ and ‘n-1’ will be part of right subtree. Divide given pre[] at index “i” and recur for left and right sub-trees. 

- Time Complexity is O(n^2).

**Method 2**
- The trick is to set a range {min .. max} for every node. Initialize the range as {INT_MIN .. INT_MAX}. The first node will definitely be in range, so create root node. To construct the left subtree, set the range as {INT_MIN …root->data}. If a values is in the range {INT_MIN .. root->data}, the values is part part of left subtree. To construct the right subtree, set the range as {root->data..max .. INT_MAX}.

- Time Complexity is O(n).