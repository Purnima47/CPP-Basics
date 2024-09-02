// internally uses trees (Red black trees)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<string> s;
    // it allows multiple values to be inserted.(duplicates are allowed)
    s.insert("abc"); // log(n)
    s.insert("dgn");
    s.insert("a");
    s.insert("bjb");
    s.insert("abc");

    // auto it = s.find("abc"); // O(log(n))
    // if (it != s.end())
    // {
    //     cout << (*it) << endl;
    //     s.erase(it);
    //     // it deletes one abc only
    // }

    // if you use this then it deletes all the abc present in the multiset.
    s.erase("abc");

    for (auto &it : s)
    {
        cout << it << endl;
    }
}