#include <iostream>
using namespace std;
int swap(int arr[], int a, int b)
{
    int t = arr[a];
    arr[a] = b;
    arr[b] = t;
    return arr;
}
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    arr = swap(arr, 4, 0);
    return 0;
}