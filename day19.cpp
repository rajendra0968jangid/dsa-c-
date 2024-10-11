#include <iostream>
using namespace std;

class Teacher
{

private:
    double salary;

public:
    Teacher(string n, string d, string s, double sal)
    {
        cout << "parameterized con." << endl;
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    Teacher()
    {
        cout << "non parameterized con." << endl;
        name = "rajendra";
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
    cout << t1.getSalary();
    return 0;
}