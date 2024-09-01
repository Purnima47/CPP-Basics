#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    // &x --> address of x.
    cout << &x << endl; // output is like this --> 0x61ff0c

    // to store the addresses of variable we use pointers.

    int *p = &x;       // int* p (for more clarity)
    cout << p << endl; // p also has its own address since it is a variable only that stores the address.

    // ROLE OF POINTERS:
    // 1. We can access the value of the variable whose address is in the pointer.(using de-reference or star operator)
    cout << *p << endl;

    // 2. We can update the value of the variable whose address is in the pointer.(using de-reference or star operator)
    *p = 47;
    cout << x << endl;
}