#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    double *cptr;

    Student(string name, double cgp)
    {
        this->name = name;
        this->cptr = new double;
        *cptr = cgp;
    }
    Student(Student &obj)
    {
        this->name = obj.name;
        this->cptr = new double;
        *cptr = *obj.cptr;
    }

    void getInfo()
    {
        cout << name << " " << *cptr << endl;
    }
};
int main()
{
    Student s1("hello", 8.9);
    Student s2(s1);
    s1.getInfo();
    *(s2.cptr) = 9.2;
    s1.getInfo();
}