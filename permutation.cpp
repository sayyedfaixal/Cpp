#include <bits/stdc++.h>
using namespace std;
void getPermutation(int index, int *arr, int n)
{
    if (index > n)
        return;
    else
    {
        for (int i = 0; i < n; i++)
        {
            swap(arr[index], arr[i]);
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    getPermutation(0, arr, 3);
    return 0;
}