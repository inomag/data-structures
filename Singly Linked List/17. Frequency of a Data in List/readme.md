## COUNT NUMBER OF TIMES A GIVEN INT OCCURS IN A LINKED LIST
___

**Method 1 (Without Recursion)**
- Algorithm
    1. Initialize count as zero.
    2. Loop through each element of linked list:
         1. If element data is equal to the passed number then increment the count.
    3. Return count.

- Time Complexity is O(n).

**Method 2 (With Recursion)**
- Algorithm
    1. count(head, key);
    2. if head is NULL
    3. return frequency
    4. if(head->data==key)
    5. increase frequency by 1
    6. count(head->next, key).

- Time Complexity is O(n).