#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void valueEqualToIndex(int arr[], int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i + 1)
            ans[i] = arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << ans[i];
    }
}
int main()
{
    int arr[] = {15, 2, 45, 12, 7};
    valueEqualToIndex(arr, 5);
    return 0;
}