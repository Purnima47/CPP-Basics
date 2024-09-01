#include <iostream>
#include <climits>
using namespace std;

// arrays are pass by reference.
void change(int arr[])
{
    arr[0] = 10;
}
int main()
{
    int arr[3] = {1, 2, 3}; // declaration
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    change(arr);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << sizeof(arr)/4;  // --> gives length since int has 4bytes
    int min = INT_MIN;
    int max =INT_MAX;

    // 2D arrays --> same as java
}