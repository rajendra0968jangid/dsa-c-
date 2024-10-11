#include <iostream>
using namespace std;

//////////////deep copy cgpa////
class Person
{
public:
    string name;
    int age;
    // Person(string name, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    // }
    Person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }
};

class Student : public Person
{
public:
    int rollno;
    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
    }
};

class GradStudent : public Student
{
public:
    string researchArea;
    GradStudent(string name, int age, int rollno, string r) : Student(name, age, rollno)
    {
        this->researchArea = r;
    }
    void getInfo()
    {
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "rollno:" << rollno << endl;
        cout << "researchArea:" << researchArea << endl;
    }
};

int main()
{
    GradStudent s1("rajendra", 24, 123, "india");
    s1.getInfo();
    return 0;
}