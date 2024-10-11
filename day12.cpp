#include <iostream>
using namespace std;

// Define a Node structure
struct Node
{
    int data;
    Node *next;
};

// Function to insert a node at the beginning
void insertAtBeginning(Node *&head, int newData)
{
    // Step 1: Create a new node
    Node *newNode = new Node();
    // cout << newNode->data;

    // Step 2: Assign data to the new node
    newNode->data = newData;

    // Step 3: Point newNode's next to the current head
    newNode->next = head;

    // Step 4: Make the new node the new head of the list
    head = newNode;
}

// Function to print the linked list
void printList(Node *temp)
{

    // Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // int age = 10;
    // int *ptr = new int;
    Node *head = nullptr; // Initialize the head of the list as NULL
    Node newnode{10,head};
    head = &newnode;

    // Insert elements at the beginning
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    // insertAtBeginning(head, 30);

    // Print the list
    
    printList(head);
    

    return 0;
}
