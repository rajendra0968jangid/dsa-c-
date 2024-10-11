#include <iostream>
using namespace std;

//////////////deep copy cgpa////
class Student
{
public:
    string name;
    double *cgpa;

    Student(string name, double cgpaVal)
    {
        this->name = name;
        this->cgpa = new double;
        *cgpa = cgpaVal;
    }
    Student(Student &obj)
    {
        this->name = obj.name;
        this->cgpa = new double;
        *cgpa = *obj.cgpa;
    }
    void getInfo()
    {
        cout << "name:" << name << endl;
        cout << "cgpa:" << *cgpa << endl;
    }
};

int main()
{
    Student s1("rahul kumar", 8.9);

    Student s2(s1);
    s2.name = "neha";
    *s2.cgpa = 9.2;

    s1.getInfo();
    s2.getInfo();

    // cout << &s1.cgpa << endl;
    // cout << &s2.cgpa << endl;
    return 0;
}