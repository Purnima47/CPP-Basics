#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> &m)
{
    for (auto &it : m)
    {
        cout << (it.first) << " " << (it.second) << endl;
    }
}

int main()
{
    // maps(sorted according to keys) and unordermaps
    // red black trees are used internally in maps.
    // key : val (pair)

    map<int, string> m;
    m[1] = "abc"; // O(log(n)) --> insertion and accessing time complexitiy
    m[5] = "cdc";
    m[3] = "acd";
    // m[2];  // by writing this the value will be stored as empty string and in other data types like int stores 0, all has its default values.
    m.insert({4, "fsn"});

    printMap(m);
    // O/P:
    // 1 abc
    // 3 acd
    // 4 fsn
    // 5 cdc

    auto it = m.find(10); // O(log(n))
    if (it == m.end())
    {
        cout << "No Val" << endl;
    }
    else
    {
        cout << it->first << " " << it->second << endl;
    }

    m.erase(3); // O(log(n)) --> deletes that key:val pair

    if (it != m.end())
    {
        m.erase(it); // it will erase the value at which the iterator is present.
    }
    m.clear(); // it clears the map
    printMap(m);

    // insertion complexity depends on key.
    // m["abcd"] = "abcd";  // str.size() * log(n)
    // str --> jo string insert kr rhe
    // n --> map ka size.
}
