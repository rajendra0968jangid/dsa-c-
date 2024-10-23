#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};
class Student : public Person
{
public:
    int roll_no;
    void getInfo()
    {
        cout << roll_no << " " << name << " " << age;
    }
};
int main()
{
    Student s1;
    s1.age = 20;
    s1.name = "hello";
    s1.roll_no = 123;
    s1.getInfo();
    return 0;
}