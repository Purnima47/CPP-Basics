#include <bits/stdc++.h>
using namespace std;

void print(set<string> &set)
{
    for (auto &it : set)
    {
        cout << it << endl;
    }
}

/* QUESTION -->
Given N strings, print unique strings in lexiographical order

N <= 10^5
|S| <= 10000
*/

void ques()
{
    set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    for (auto value : s)
    {
        cout << value << endl;
    }
}

int main()
{
    // unique elements + sorted order
    set<string> s;
    s.insert("abc"); // log(n)
    s.insert("dgn");
    s.insert("a");
    s.insert("bjb");

    auto it = s.find("abc"); // O(log(n))
    if (it != s.end())
    {
        cout << (*it) << endl;
        s.erase(it);
    }

    print(s);
    ques();
}