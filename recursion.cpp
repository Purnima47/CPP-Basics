// base case, work, call
// base case, call, work

#include <iostream>
using namespace std;
// WAP using recursion to print a^b

int aRaisedToPowb(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    return a * aRaisedToPowb(a, b - 1);
}
int main()
{
    int res = aRaisedToPowb(54, 21);
    cout << res << endl;
}