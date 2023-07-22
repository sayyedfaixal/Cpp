#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ans;
    int arr[10] = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    sort(arr, arr + 10);
    for (int i = 0; i < 10; i++)
    {
        if (abs(arr[i] - arr[i + 1]) <= 1)
        {
            cout << "arr[" << i << "] - arr[" << i + 1 << "] = " << abs(arr[i] - arr[i + 1]) << endl;
            ans.push_back(arr[i]);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}