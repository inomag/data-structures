int count(struct Node* head, int key){
    if(head == NULL)
        return 0;
        
   int frequency = count(head->next, key);
   if(head->data == key)
     return 1 + frequency;
    
    // else 
    return frequency;
}