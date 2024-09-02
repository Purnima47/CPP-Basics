// ques link -->
// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/

// MONK AND THE MAGICAL CANDY BAGS.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<long long> bags;

        for (int i = 0; i < n; i++)
        {
            long long candy_cnt;
            cin >> candy_cnt;

            bags.insert(candy_cnt);
        }

        long long total_candies = 0;
        for (int i = 0; i < k; i++)
        {
            auto last_it = (--bags.end());
            long long candy_cnt = *last_it;
            total_candies += candy_cnt;

            bags.erase(last_it);
            bags.insert(candy_cnt / 2);
        }

        cout << total_candies << endl;
    }
}