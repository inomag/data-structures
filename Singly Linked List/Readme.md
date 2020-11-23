# SINGLY LINKED LIST
___
- Linear data structure.
- Elements not stored in contiguous location & linked using pointers

- **Drawbacks**
    1. Random access is not allowed. Elements accessed sequentially
    2. Extra memory space for a pointer.

- Each node consists of two parts (i) Data (ii) Pointer
- Node representation in C.
```
struct Node {
    int data;
    struct Node* next;
}
```
- Node representation in C++.
```
class Node {
    public:
        int data;
        Node* next;
}
```
**Create a Simple Linked List**
- *C*
```
#include <stdio.h> 
#include <stdlib.h> 
  
struct Node { 
    int data; 
    struct Node* next; 
}; 
 
// Program to create a simple linked 
// list with 3 nodes 
int main(){ 
    struct Node* head = NULL; 
    struct Node* second = NULL; 
    struct Node* third = NULL; 
    // allocate 3 nodes in the heap 
    head = (struct Node*)malloc(sizeof(struct Node)); 
    second = (struct Node*)malloc(sizeof(struct Node)); 
    third = (struct Node*)malloc(sizeof(struct Node));   
    head->data = 1; // assign data in first node 
    head->next = second; // Link first node with 
    // the second node 
    // assign data to second node 
    second->data = 2; 
    // Link second node with the third node 
    second->next = third; 
    third->data = 3; // assign data to third node 
    third->next = NULL;   
    return 0; 
} 
```
- *C++*
```
#include <bits/stdc++.h> 
using namespace std; 

class Node{ 
public: 
	int data; 
	Node* next; 
}; 

// Program to create a simple linked 
// list with 3 nodes 
int main(){ 
	Node* head = NULL; 
	Node* second = NULL; 
	Node* third = NULL; 

	// allocate 3 nodes in the heap 
	head = new Node(); 
	second = new Node(); 
	third = new Node(); 
	head->data = 1; // assign data in first node 
	head->next = second; // Link first node with the second node
	// assign data to second node 
	second->data = 2; 
	// Link second node with the third node 
	second->next = third;
	third->data = 3; // assign data to third node 
	third->next = NULL;
	return 0; 
} 
```
___
### Difference between Array and Linked List

| Array | Linked List |
|------|------|
|Data structures that contain collection of similar type of data elements. | *Non-primitive* type data structure containing a collection of unordered linked elements called nodes. |
|Elements belong to indexes.| We need to start from head & work our way to get to subsequent elements. |
|Accessing elements is fast. | Takes linear time & hence is a bit slower.|
|Operations like insertion & deletion consumes time.|Operations are fast.|
|Fixed size & memory allocated during compile time. | Dynamic size & memory allocated during runtime.|
|Stored consecutively.|Stored randomly.|
|Requirement of memory is less.|Requirement of memory is more as memory is needed for a referencing element.|
|Memory utilization is inefficient.|Memory utilization is efficient.|
___
> All the information are taken from https://www.geeksforgeeks.org/
