#include <iostream>
using namespace std;
int lastOccurence(int arr[], int key, int size)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            start = mid + 1;
            ans = mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    int arr[11] = {1, 2, 4, 4, 4, 5, 10, 11, 14, 21, 34};
    cout << "Last occurence found at location : " << lastOccurence(arr, 4, 11);
    return 0;
}
