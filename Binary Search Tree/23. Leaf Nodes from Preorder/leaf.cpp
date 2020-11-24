// C++ program to print leaf node from 
// preorder of binary search tree. 
#include<bits/stdc++.h> 
using namespace std; 

// Binary Search 
int binarySearch(int inorder[], int l, int r, int d) 
{ 
	int mid = (l + r)>>1; 

	if (inorder[mid] == d) 
		return mid; 

	else if (inorder[mid] > d) 
		return binarySearch(inorder, l, mid - 1, d); 

	else
		return binarySearch(inorder, mid + 1, r, d); 
} 

// Function to print Leaf Nodes by doing preorder 
// traversal of tree using preorder and inorder arrays. 
void leafNodesRec(int preorder[], int inorder[], 
				int l, int r, int *ind, int n) 
{ 
	// If l == r, therefore no right or left subtree. 
	// So, it must be leaf Node, print it. 
	if(l == r) 
	{ 
		printf("%d ", inorder[l]); 
		*ind = *ind + 1; 
		return; 
	} 

	// If array is out of bound, return. 
	if (l < 0 || l > r || r >= n) 
		return; 

	// Finding the index of preorder element 
	// in inorder array using binary search. 
	int loc = binarySearch(inorder, l, r, preorder[*ind]); 

	// Incrementing the index. 
	*ind = *ind + 1; 

	// Finding on the left subtree. 
	leafNodesRec(preorder, inorder, l, loc - 1, ind, n); 

	// Finding on the right subtree. 
	leafNodesRec(preorder, inorder, loc + 1, r, ind, n); 
} 

// Finds leaf nodes from given preorder traversal. 
void leafNodes(int preorder[], int n) 
{ 
	int inorder[n]; // To store inorder traversal 

	// Copy the preorder into another array. 
	for (int i = 0; i < n; i++) 
		inorder[i] = preorder[i]; 

	// Finding the inorder by sorting the array. 
	sort(inorder, inorder + n); 

	// Point to the index in preorder. 
	int ind = 0; 

	// Print the Leaf Nodes. 
	leafNodesRec(preorder, inorder, 0, n - 1, &ind, n); 
} 

// Driven Program 
int main() 
{ 
	int preorder[] = { 890, 325, 290, 530, 965 }; 
	int n = sizeof(preorder)/sizeof(preorder[0]); 

	leafNodes(preorder, n); 
	return 0; 
} 
