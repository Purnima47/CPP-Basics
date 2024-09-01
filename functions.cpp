#include <iostream>
using namespace std;

void swap1(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap2(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swapUsingPointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    // Function-->
    // 1. PASS BY VALUE
    // 2. PASS BY REFERENCE

    int x = 10;
    int y = 20;

    swap1(x, y); // PASS BY VALUE IT WILL NOT AFFECT THE ACTUAL VALUES.
    cout << x << " " << y << endl;

    swap2(x, y); // PASS BY REFERENCE IT WILL AFFECT THE ACTUAL VALUES.
    cout << x << " " << y << endl;

    swapUsingPointers(&x, &y);
    cout << x << " " << y << endl;
}