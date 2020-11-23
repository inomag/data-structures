#include<iostream>
using namespace std;
class Node {
   public:
      int data;
   Node* next;
};
void append(struct Node** start, int data) {
   struct Node* new_node = new Node;
   new_node->data = data;
   new_node->next = (*start);
   (*start) = new_node;
}
int count_recursive(Node* start) {
   if (start == NULL)
      return 0;
   return 1 + count_recursive(start->next);
}
int count_iterative(Node* start) {
   int count = 0;
   Node* current = start;
   while (current != NULL) {
      count++;
      current = current->next;
   }
   return count;
}
int main() {
   Node* start = NULL;
   append(&start, 1);
   append(&start, 3);
   append(&start, 1);
   append(&start, 2);
   append(&start, 1);
   cout << "Node count using iterative approach: " << count_iterative(start) << endl;
   cout << "Node count using recursion: " << count_recursive(start);
}