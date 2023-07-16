#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, -2, 18, -90, 10, 34, 54, 19};
    int n = 8;
    for (int i = 0; i < n; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}