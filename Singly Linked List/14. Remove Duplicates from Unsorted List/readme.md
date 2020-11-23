## REMOVE DUPLICATES FROM AN UNSORTED SINGLY LINKED LIST
___

**Method 1**
- This is the simple way where two loops are used. Outer loop is used to pick the elements one by one and inner loop compares the picked element with rest of the elements.

- Time Complexity is O(n^2)

**Method 2**
- In general, Merge Sort is the best-suited sorting algorithm for sorting linked lists efficiently. 
    1. Sort the elements using Merge Sort. O(nLogn) 
    2. Remove duplicates in linear time using the algorithm for removing duplicates in sorted Linked List. O(n) 
    - Please note that this method doesn’t preserve the original order of elements.

- Time Complexity is O(nlogn).