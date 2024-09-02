#include <bits/stdc++.h>
using namespace std;

/*

Given N strings and Q queries.
In each query you are given a string print freq of that string

CONSTRAINTS:
N <= 10^6
|S| <= 100
Q <= 10^6

*/

void printMap(unordered_map<int, string> &m)
{
    for (auto &it : m)
    {
        cout << (it.first) << " " << (it.second) << endl;
    }
}

void question()
{
    unordered_map<string, int> m;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << m[s] << endl;
    }
}

int main()
{
    unordered_map<int, string> m;
    // this uses inbuilt hashTable not trees.
    m[1] = "abc"; // O(1) --> insertion and accessing. (avg time complexity)
    m[5] = "cdc";
    m[3] = "acd";

    // find(),erase() --> O(1)

    // valid keys datatype
    // in unordered_map we can't insert complex data types since its hash value is not defined.
}