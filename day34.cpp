#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string n, int a)
    {
        this->age = a;
        this->name = n;
    }
};
class Student : public Person
{
public:
    int roll_no;
    Student(string n, int a, int roll_no) : Person(n, a)
    {
        this->roll_no = roll_no;
    }
    void getInfo()
    {
        cout << roll_no << " " << name << " " << age;
    }
};
int main()
{
    Student s1("hello", 20, 123);
    s1.getInfo();
    return 0;
}