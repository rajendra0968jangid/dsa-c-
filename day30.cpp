#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Function to insert a node at the beginning of the doubly linked list
void insertAtBeginning(Node*& head, int newData) {
    // Step 1: Create a new node
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;  // Step 2: Point newNode->next to current head
    newNode->prev = nullptr;  // Step 4: newNode->prev should be nullptr

    // Step 3: If the list is not empty, update the prev pointer of the old head
    if (head != nullptr) {
        head->prev = newNode;
    }

    // Step 5: Move the head pointer to the new node
    head = newNode;
}

// Function to print the doubly linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insert data at the beginning
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);

    // Print the list
    printList(head);

    return 0;
}
