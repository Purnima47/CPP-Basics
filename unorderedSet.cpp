#include <bits/stdc++.h>
using namespace std;

/* QUESTION -->
Given N strings and Q queries.
In each query you are given a string print yes if string is present
else print no

N <= 10^6
|S| <= 100
Q <= 10^6

*/

void ques()
{
    unordered_set<string> s;
    // basic data types are used. same as unordered_map
    // uses inbuilt hashTable.
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    int q;
    cin >> q;

    while (q--)
    {
        string str;
        cin >> str;
        if (s.find(str) == s.end())
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

    for (auto value : s)
    {
        cout << value << endl;
    }
}

int main()
{
    // unique elements
    unordered_set<string> s;
    s.insert("abc"); // O(1)
    s.insert("dgn");
    s.insert("a");
    s.insert("bjb");

    auto it = s.find("abc"); // O(1)
    if (it != s.end())
    {
        cout << (*it) << endl;
        s.erase(it);
    }
}