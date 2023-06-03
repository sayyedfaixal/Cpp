#include <iostream>
using namespace std;
int firstOccurence(int arr[], int key, int size)
{
    int start = 0;
    int end = size - 1;
    int fo = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            end = mid - 1;
            fo = mid;
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
    return fo;
}
int lastOccurence(int arr[], int key, int size)
{
    int start = 0;
    int end = size - 1;
    int lo = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            start = mid + 1;
            lo = mid;
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
    return lo;
}

int main()
{
    int arr[11] = {1, 2, 4, 4, 4, 5, 10, 11, 14, 21, 34};
    int key = 4;
    cout << "Number of occurence of " << key << " is " << lastOccurence(arr, key, 11) - firstOccurence(arr, key, 11) + 1;
    return 0;
}