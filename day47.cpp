#include <iostream>
#include <string>
using namespace std;

string subS(string n, int s, int h)
{
    string check = "";
    for (int i = 0; i < n.length(); i++)
    {
        if (i == h)
        {
            break;
        }
        check += n[i + s];
    }
    return check;
};
int main()
{
    string name = "hello world";
    cout << subS(name, 2, 3);
    return 0;
}
