void printNthFromLast(struct Node* head, int n) 
{ 
	static int i = 0; 
	if (head == NULL) 
		return; 
	printNthFromLast(head->next, n); 
	if (++i == n) 
		printf("%d", head->data); 
} 
