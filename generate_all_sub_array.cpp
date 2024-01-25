#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k = 3;
    int count = 0;
    for (int i = 0; i < 10; ++i)
    {
        int sum = 0;
        for (int j = i; j < 10; ++j)
        {
            sum += arr[j];
            if (sum == k)
            {
                count++;
            }
        }
    }
    cout << "Total number of sub-array whose sum = " << k << " is " << count;
    return 0;
}