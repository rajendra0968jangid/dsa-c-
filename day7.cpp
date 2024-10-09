#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;
};

// Function to insert a node at the beginning
void insertAtBeginning(Node *&head, int newData)
{
    // Create a new node
    Node *newNode = new Node();
    newNode->data = newData;

    // Make the new node point to the current head
    newNode->next = head;

    // Move the head to point to the new node
    head = newNode;
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
    Node *head = nullptr; // Initialize an empty list

    // Insert nodes at the beginning
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);

    // Print the linked list
    printList(head);

    return 0;
}
