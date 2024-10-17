#include <iostream>
using namespace std;

struct User
{
    int age;
    string name; // Data stored in the node
    User *next;  // Pointer to the next node
};

// Function to insert a new node at the end of the list
void insertAtEnd(User *&head, int age, string name)
{
    // Create a new node
    User *newUser = new User();
    newUser->age = age;
    newUser->name = name;
    newUser->next = nullptr;

    // If the list is empty, make the new node the head
    if (head == nullptr)
    {
        head = newUser;
        return;
    }

    // Otherwise, traverse the list to find the last node
    User *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    // Point the last node's next to the new node
    temp->next = newUser;
}



int main()
{
    User *head = nullptr; // Initialize an empty list

    // Insert elements at the end of the list
    insertAtEnd(head, 24, "rajendra");//1000
    insertAtEnd(head, 20, "hello");//1000
    insertAtEnd(head, 21, "harsh");
    insertAtEnd(head, 22, "ambika");

    cout<<head->next->next->next->name;

    return 0;
}