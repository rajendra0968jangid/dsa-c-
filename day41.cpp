#include <iostream>
using namespace std;
// incapsulation,inheritance,polymors,abstraction
// private,public,protected
class Student
{
private:
    int age;

public:
    string name;
    Student(string n, int a)
    {
        name = n;
        age = a;
    };
    void changeAge(int a)
    {
        age = a;
    }
    void print()
    {
        cout << "print " << age;
    }
    ~Student(){
       cout<<"destructor"; 
    }
};
int main()
{
    Student ambika("hello", 20);
    ambika.changeAge(21);
    ambika.print();

    return 0;
}