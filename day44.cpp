#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(int a, string n)
    {
        this->age = a;
        this->name = n;
    }
    void vPerson()
    {
        if (age > 18)
        {
            cout << name << " can vote";
        }
        else
        {
            cout << name << "can't vote";
        }
    }
};
class Student
{
public:
    int roll_no;
    Student(int r)
    {
        this->roll_no = r;
    }
};

class Class12 : public Student, public Person
{
public:
    string branch;
    Class12(string b, int r, int a, string n) : Student(r), Person(a, n)
    {
        this->branch = b;
    }
};
int main()
{
    // Class12 stu;
    // stu.name = "harsh";
    // stu.age = 20;
    // stu.branch = "cs";
    // stu.roll_no = 123;
    Class12 stu("cs", 123, 20, "harsh");
    stu.vPerson();
    return 0;
}