#include <iostream>
using namespace std;

class Teacher
{

private:
    double salary;

public:
    Teacher(string name, string dept, string subject, double salary)
    {
        cout << "parameterized con." << endl;
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    Teacher(Teacher &obj)
    {
        cout << "copy const." << endl;
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }
    string name;
    string dept;
    string subject;

    void chageDept(string newDept)
    {
        dept = newDept;
    }
    // setter
    void setSalary(double s)
    {
        salary += s;
    }
    // getter
    double getSalary()
    {
        return salary;
    }
};
int main()
{
    Teacher t1("rajendra", "cs", "c++", 25000);
    Teacher t2(t1);

    t1.name = "hello";

    cout << &t1 << endl;
    cout << &t2 << endl;
    cout << t1.name << endl;
    cout << t2.name << endl;
    return 0;
}