#include <bits/stdc++.h>
using namespace std;

int main()
{
    // we can pairs of :
    // 1. two data types
    // 2. two containers (vector, stack, queue).
    pair<int, string> p;
    // p = make_pair(10, "febsf");
    p = {10, "gkrng"};
    cout << p.first << " " << p.second << endl;

    // we can copy pair.
    pair<int, string> p1 = p;
    // pair values are pass by value(copies are send)

    // to make it ref use &
    pair<int, string> &p2 = p;

    // pairs are used to make relation between two values.
    int a1[] = {1, 5, 8};
    int a2[] = {52, 8, 42};

    pair<int, int> p_arr[3];
    p_arr[0] = {1, 52};
    p_arr[1] = {5, 8};
    p_arr[2] = {8, 42};
    swap(p_arr[0], p_arr[1]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_arr[i].first << " " << p_arr[i].second<<endl;
    }
}