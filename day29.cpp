#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 34, 40, 44, 52, 56, 66};
    int f = 10;
    int low = 0;                            // 0
    int high = (sizeof(arr) / sizeof(int)); // 17
    int mid = high / 2;                     // 8
    while (1)
    {
        if (arr[mid] == f)
        {
            cout << "found" << endl;
            break;
        }
        if (arr[mid] > f)
        {
            high = mid;
            mid = mid / 2;
            cout << arr[low] << " one " << arr[high - 1] << endl;
        }
        if (arr[mid] < f)
        {
            low = mid;
            mid = (mid + high) / 2;
            cout << arr[low] << " two " << arr[high - 1] << endl;
        }
    }
    return 0;
}