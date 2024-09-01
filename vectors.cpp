// arrays jisme dynamic size hota hai.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // v.size() --> O(1)
    vector<int> v(10, 3);
    // to fill the vector of size 10 each element (3)
    v.push_back(10); // O(1)
    v.pop_back();    // O(1)

    // copies are send O(n)
    vector<int> v1 = v;

    // since it is O(n) therefore use pass by reference.
    vector<int> &v2 = v;
}