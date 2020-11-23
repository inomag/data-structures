## MOVE LAST ELEMENT OF LINKED LIST TO THE FRONT
___

**Algorithm**
- Traverse the list till last node. Use two pointers: one to store the address of last node and other for address of second last node. After the end of loop do following operations.
    1. Make second last as last (secLast->next = NULL).
    2. Set next of last as head (last->next = *head_ref).
    3. Make last as head ( *head_ref = last).

- Time Complexity is O(n).