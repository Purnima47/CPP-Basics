#include <bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int, int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

void printNormalVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};
    printVector(v);

    // ARRAY OF VECTORS
    vector<int> v1[10];

    int N;
    cin >> N;
    vector<int> v2[N];

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v2[i].push_back(x);
        }
    }

    for (int i = 0; i < N; i++)
    {
        printNormalVector(v2[i]);
    }

    // VECTOR OF VECTOR
    int N1;
    cin >> N1;
    vector<vector<int>> v3;

    for (int i = 0; i < N1; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        // or use:
        // v3.push_back(vector<int>());

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
            // or use:
            // v3[i].push_back(x);
        }

        v3.push_back(temp);
        // then you don't need to do this if you are using M-2

        for (int i = 0; i < v3.size(); i++)
        {
            printNormalVector(v3[i]);
        }
    }
}