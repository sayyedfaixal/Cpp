#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    int n;
    cout << "Enter numbers of Entries you want : ";
    cin >> n;
    cout << "Now enter the values... \n";
    for (int i = 0; i < n; ++i)
    {
        int k, v;
        cout << "Enter key : \n";
        cin >> k;
        cout << "Enter value: \n";
        cin >> v;
        mp[k] = v;
    }
    cout << "Your map has values : \n";
    for (auto &x : mp)
    {
        cout << "Key : " << x.first << "- Values :" << x.second << endl;
    }
    int f;
    cout << "Enter the value you want to search in the map : ";
    cin >> f;
    auto it = mp.find(f);
    if (it == mp.end())
        cout << " No value found...";
    else
        cout << "Value found " << mp.at(f);
    return 0;
}