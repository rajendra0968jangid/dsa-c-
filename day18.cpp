#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
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
        salary = s;
    }
    // getter
    double getSalary()
    {
        return salary;
    }
};
int main()
{
    Teacher t1;
    t1.name = "sharda";
    t1.subject = "c++";
    t1.setSalary(25000);
    cout << t1.getSalary();

    return 0;
}