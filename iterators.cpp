#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // v.begin() --> v[0]
    // v.end()  --> v[next to last element]

    vector<int>::iterator it = v.begin();
    // cout << (*(it + 1)) << endl;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << endl;
    }

    // it++ --> next iterator.
    // it+1 --> next location
    // in vectors they are continous but not they are not in maps and set.
    // so avoid using it+1.

    vector<pair<int, int>> vector_pair = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator itVP;

    for (itVP = vector_pair.begin(); itVP != vector_pair.end(); itVP++)
    {
        cout << (*itVP).first << " " << (*itVP).second << endl;
        // or you can use:
        // cout << (itVP->first) << " " << (itVP->second) << endl;

        // (*itVP).first <=> (itVP->first)
    }

    // RANGE BASED LOOPS (cpp 11 ke baad)
    // in this copy are send to value from v elements.
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    // so use cpp reference
    // for (int &value : v)
    // {
    //     cout << value << " ";
    // }
    // cout << endl;

    // AUTO KEYWORD
    auto a = 1;
    cout << a << endl;
    // it will automatically detect the data type.
    // it is very useful in iterators.

    //  vector<int>::iterator it = v.begin();
    //  auto keyword replaces this above line
    for (auto it1 = v.begin(); it1 != v.end(); it1++)
    {
        cout << (*it1) << endl;
    }

    // we can combine auto and range based loops.

    for (auto &value : vector_pair)
    {
        cout << value.first << " " << value.second << endl;
    }
    cout << endl;
}