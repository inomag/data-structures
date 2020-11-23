## SWAP NODES IN A LINKED LIST WITHOUT SWAPPING DATA
___

- It has the following cases to be handled. 
    1. x and y may or may not be adjacent. 
    2. Either x or y may be a head node. 
    3. Either x or y may be the last node. 
    4. x and/or y may not be present in the linked list.

- The idea is to first search x and y in the given linked list. If any of them is not present, then return. While searching for x and y, keep track of current and previous pointers. First change next of previous pointers, then change next of current pointers. 