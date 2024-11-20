// overloading
//////////////////////////////////////////
// #include <iostream>
// using namespace std;

// // Function with one integer parameter
// void print(int i) {
//     cout << "Integer: " << i << endl;
// }

// // Function with one double parameter
// void print(double d) {
//     cout << "Double: " << d << endl;
// }

// // Function with two parameters
// void print(string s, int i) {
//     cout << "String: " << s << ", Integer: " << i << endl;
// }

// int main() {
//     print(10);               // Calls the function with an integer
//     print(3.14);             // Calls the function with a double
//     print("Hello", 2024);    // Calls the function with a string and an integer
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////
// overridden
// #include <iostream>
// using namespace std;

// class Base
// {
// public:
//    virtual void print()
//     {
//         cout << "Base class";
//     }
// };
// class Derived : public Base
// {
// public:
//     void print()
//     {
//         cout << "Derived class";
//     }
// };
// int main()
// {
//     // Base b1;
//     // // b1.print();
//     // Derived d1;
//     // d1.print();
//     /////////////////////////
//     Base *b1;
//     Derived d1;
//     b1 = &d1;
//     // d1.print();
//     b1->print();

//     return 0;
// }

////////////////////////////////////////////////////////////////
// // template
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Addition of integers: " << add(3, 7) << endl;    // int
    cout << "Addition of doubles: " << add(3.5, 2.1) << endl; // double
    return 0;
}
////////////////////////////////////////////////////////////////////
// // exceptions handling
// #include <iostream>
// using namespace std;

// int main()
// {
//     try
//     {
//         int age = 15;
//         if (age >= 18)
//         {
//             cout << "Access granted - you are old enough.";
//         }
//         else
//         {
//             throw 505;
//         }
//     }
//     catch (...)
//     {
//         cout << "Access denied - You must be at least 18 years old.\n";
//     }
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////
// ofstream	  Creates and writes to files
// ifstream	  Reads from files

////////////////////////////
// ofstream
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     // Create and open a text file
//     ofstream MyFile("filename.txt");

//     // Write to the file
//     MyFile << "Files can be tricky, but it is fun enough!";

//     // Close the file
//     MyFile.close();
// }
//////////////////////////////
// // ifstream
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main()
// {
//     // Create a text file
//     ofstream MyWriteFile("filename.txt");

//     // Write to the file
//     MyWriteFile << "Files can be tricky, but it is fun enough!";

//     // Close the file
//     MyWriteFile.close();

//     // Create a text string, which is used to output the text file
//     string myText;

//     // Read from the text file
//     ifstream MyReadFile("filename.txt");

//     getline(MyReadFile, myText);
//     cout << myText << endl;
//     getline(MyReadFile, myText);
//     cout << myText;

//     // Close the file
//     MyReadFile.close();
// }
///////////////////////////////////////////////////
////goto
// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "raj" << endl;
//     goto asdf;
//     cout << "hello" << endl;

// asdf:
//     cout << "123" << endl;
//     return 0;
// }