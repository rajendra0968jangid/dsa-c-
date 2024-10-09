#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;
};

// Function to insert a new node after a specified node
void insertAfter(Node *prevNode, int newData)
{
    // Check if the previous node is null
    if (prevNode == nullptr)
    {
        cout << "The given previous node cannot be null" << endl;
        return;
    } 

    // Create a new node
    Node *newNode = new Node();
    newNode->data = newData;

    // Make the new node's next point to prevNode's next
    newNode->next = prevNode->next;

    // Make prevNode's next point to the new node
    prevNode->next = newNode;
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main()
{
    // Create the linked list with three nodes
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    // Print the original linked list
    cout << "Original list: ";
    printList(head);

    // Insert a new node with data 25 after the second node
    insertAfter(second, 25);

    // Print the updated linked list
    cout << "Updated list: ";
    printList(head);

    // Free memory
    // delete head;
    // delete second;
    // delete third;

    return 0;
}
