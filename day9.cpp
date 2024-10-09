#include <iostream>
using namespace std;

struct Node
{
    int data;
    int data1;
};
int main()
{
    // Node user;
    // user.data = 4;
    // user.data1 = 8;
    // cout << user.data << endl
    //      << user.data1 << endl;
    Node *user1 = new Node;
    user1->data = 14;
    user1->data1 = 18;
    cout << user1 << endl
         << user1->data << endl
         << user1->data1 << endl;
    return 0;
}
