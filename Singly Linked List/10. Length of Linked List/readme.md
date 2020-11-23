## LENGTH OF A SINGLY LINKED LIST BY RECURSIVE AND ITERATIVE METHOD
___

- Iterative Method
    1. Initialize count as 0 
    2. Initialize a node pointer, current = head.
    3. Do following while current is not NULL
        1. current = current -> next
        2. count++;
    4. Return count.

- Recursive Method
    int getCount(head)
    1. If head is NULL, return 0.
    2. Else return 1 + getCount(head->next) 