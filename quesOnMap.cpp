/*  Given N strings, print UNIQUE Strings in LEXIOGRAPHICAL
 order with their freq.

Constraints:
N <= 10^5
|S| <= 100000
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}