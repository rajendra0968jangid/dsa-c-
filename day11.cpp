#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;
};

// Function to delete the node at the beginning
void deleteAtBeginning(Node *&head)
{
    // Check if the list is empty
    if (head == nullptr)
    {
        cout << "The list is already empty!" << endl;
        return;
    }

    // Store the current head node
    Node *temp = head;

    // Move the head pointer to the next node
    head = head->next;

    // Delete the old head node
    delete temp;
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
    cout<<endl<<head<<endl;
    printList(head);

    // Delete the node at the beginning
    deleteAtBeginning(head);

    // Print the updated linked list
    cout << "Updated list after deleting the first node: ";
    cout<<endl<<head<<endl;
    printList(head);

    // Free remaining memory
    delete head;
    delete second;
    delete third;

    return 0;
}
