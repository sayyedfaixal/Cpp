#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    vector<int> ans;
    int n;
    cout << "Enter the Size of the array : ";
    cin >> n;
    cout << "Now Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            ans.push_back(arr[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}