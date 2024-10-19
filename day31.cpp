#include <iostream>
using namespace std;

int main()
{
    string s = "((()))";
    int l = s.length();
    int i = 0;
    int j = 1;
    char ch = '(';
    char ch1 = ')';
    int count = 0;
    int k = 0;
    while (k < l)
    {
        if (s[i] == ch && s[j] == ch1)
        {
            count -= 2;
        }
        count++;
        i++;
        j++;
        k++;
    }
    cout << count;
    return 0;
}