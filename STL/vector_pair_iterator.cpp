#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> vp;
    int n;
    cout << "Enter the size of the vector to create pair of vector : ";
    cin >> n;
    cout << "Now enter the pair values : \n";
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }
    vector<pair<int, int>>::iterator it;
    for (it = vp.begin(); it != vp.end(); ++it)
    {
        cout << "First -> " << it->first << " Second ->" << it->second << endl;
    }
}