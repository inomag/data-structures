## SEARCH AN ELEMENT IN SINGLY LINKED LIST BY RECURSION AND ITERATION METHOD
___

- Iteration Method. 
    1. Initialize a node pointer, current = head.
    2. Do following while current is not NULL
        1. current->key is equal to the key being searched return true.
        2. current = current->next
    3. Return false.

- Recursion Method.
    bool search(head, x)
    1. If head is NULL, return false.
    2. If head's key is same as x, return true;
    3. Else return search(head->next, x).

    