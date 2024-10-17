#include <iostream>
using namespace std;

struct Product
{
    int price;
    string name, pid;
};
struct User
{
    string uname, uid;
};
struct Order
{
    Product *pid[10];
    string oid;
    User *uid;
};
int main()
{
    Product p1{1000, "jeans", "pid_1"};
    Product p2{2000, "shirt", "pid_2"};
    Product p3{3000, "t-shirt", "pid_3"};

    User u1{"rajendra", "uid_1"};
    User u2{"harsh", "uid_2"};
    User u3{"ambika", "uid_3"};

    Order o1{{&p1, &p2}, "oid_1", &u2};
    Order o2{{&p1, &p2, &p3}, "oid_2", &u1};

    cout << o2.pid[0]->name;

    return 0;
}