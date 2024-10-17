#include <iostream>
using namespace std;
struct User
{
    int width, height, age, id, phone_no;
    string name;
};
int main()
{
    User user1;
    user1.width = 20;
    user1.height = 56;
    user1.age = 20;
    user1.id = 1234;
    user1.phone_no = 6543219870;
    user1.name = "ambika";
     
    return 0;
}