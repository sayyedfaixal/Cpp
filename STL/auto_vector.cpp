#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> vp = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    for (auto it : vp)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}